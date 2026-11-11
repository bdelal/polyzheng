#include <SoftwareSerial.h>
#include "DFRobotDFPlayerMini.h"
#include "Seeed_MPR121_driver.h"

// Debug-Flag zum Aktivieren/Deaktivieren von Serial-Ausgaben
bool DEBUG= false;

// DFP-Player
SoftwareSerial softSerial(10, 11);
DFRobotDFPlayerMini player;

//---------Setup Piezo---------------------
//MultiplexerPins
const int s0= 2;
const int s1= 3;
const int s2= 4;
const int s3= 5;
//Schwellenwert für das Zupfen
const int VIB_THRESHOLD= 25;
//verwendetet Piezos zum Multiplexer 
const int piezoChannels[]= {1,2,3,4,5,7};
//Gesamtlänge / Einzellänge
const int NUM_PIEZOS= sizeof(piezoChannels)/sizeof(piezoChannels[0]);
const int piezoSounds[]= {1,2,3,4,5,6,7,8,9,10};
//verhindert das nach einem Anschlag mehrfach gespielt wird 
bool stringIsActive[NUM_PIEZOS]= {false};
bool isPiezohit= false; // Wird bei Piezoanschlag gesetzt


// --------Setup MPR121 Touch -------------
Mpr121 mpr121;
//verwenden 8 sensoren
const int NUM_SENSORS= 8;
//Touchkanäle die verwendet werden 
const uint8_t sensorChannels[NUM_SENSORS]= {0,1,2,3,8,9,10,11};
//für Touchlogik
// ob bereits gedrückt
bool touch_status_flag[NUM_SENSORS]= {false}; 
 // Zeit, wann Touch begann
unsigned long touchStartTime[NUM_SENSORS]= {0};
   // Touch läuft gerade
bool touchIsGoing[NUM_SENSORS]= {false};
 // wurde schon langer Touch ausgelöst?
bool longTouchTriggered[NUM_SENSORS]= {false};

//----------FunButtons------------------
const int funButton1=6;
const int funButton2=7;
const int funButton3=8;
const int funButton4= 9;
// Modus-Button (wechselt zwischen Guzheng, Geige, Erhu)
int currentMode= 0;
const int NUM_MODES= 3;
const int buttonModus= 12; 

void setup() {
  Serial.begin(115200);
  // DFPlayer starten
  softSerial.begin(9600);
  if (!player.begin(softSerial)) {
    Serial.println("DFPlayer nicht gefunden!");
    while (1);// Endlosschleife bei Fehler
  }
  player.volume(30);
  Serial.println("DFPlayer bereit");

  // Pins für Multiplexer konfigurieren
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);

  // MPR121 init
  if (mpr121.begin()<0) {
    Serial.println("MPR121 nicht gefunden!");
  } else {
    Serial.println("MPR121 bereit");
  }

  // Buttons als Input mit Pullup-Widerstand
  pinMode(funButton1, INPUT_PULLUP);
  pinMode(funButton2, INPUT_PULLUP);
  pinMode(funButton3, INPUT_PULLUP);
  pinMode(funButton4, INPUT_PULLUP);
  pinMode(buttonModus, INPUT_PULLUP);


}

// Wählt den gewünschten MUX-Kanal aus
void selectMuxChannel(int channel) {
  digitalWrite(s0, bitRead(channel, 0));
  digitalWrite(s1, bitRead(channel, 1));
  digitalWrite(s2, bitRead(channel, 2));
  digitalWrite(s3, bitRead(channel, 3));
}
/*Diese Methode liest den analogen Eingang A0 mehrmals hintereinander aus,
 bildet den Durchschnitt der Messwerte und gibt diesen stabileren Wert zurück.
 Ziel dabei ist es Rauschen und  Ausreißer z. B. durch Piezo-Flattern auszufiltern.
 bsp. Verhinderung von: 3, 2, 180, 1, 2-->zufälliger Wert der nicht Anschlag war
*/
int readStableValue() {
  int summe= 0;
  //hören 5mal
  const int empfWerte=5;
  for (int i= 0; i < empfWerte; i++) {
    summe += analogRead(A0);
    delay(1);
  }
  // Glättung des Wertes (anhand des durchschnitts )wird zurück gegeben 
  return summe / empfWerte;
}

/*checkPiezos(): gibt true zurück, wenn ein Piezo-Sound gespielt wurde
Was macht StringIsAktiv --> sorgt dafür dass ein Piezo-Sensor nur einmal pro Zupfen einen Ton abspielt
auch wenn weiterhin vibrationen erkannt werden.Zudem ist diese Methode eine 
boolische Methode, damit man weiß dass ein Piezo Vorrang hat und deshlab der touch ignoriert werden soll.
*/
bool checkPiezos() {
  for (int i= 0; i < NUM_PIEZOS; i++) {
        
    // Wählt den MUX-Kanal des aktuellen Piezo-Sensors aus
    int channel= piezoChannels[i];
    selectMuxChannel(channel);

    //um stabile Werte vom Sensor zu erhalten
    delayMicroseconds(300);
    int value= readStableValue();

    if (DEBUG) {
      Serial.print("MUX C"); Serial.print(channel);
      Serial.print("->"); Serial.println(value);
    }
    //Überprüft, ob der Wert des Sensors über dem Schwellenwert liegt fals ja gibt es ein Ton aus der GetPiezo-mETHODE 
    if (value > VIB_THRESHOLD) {
      //wenn der Sensorwert über dem Schwellenwert liegt und der Ton noch nicht gespielt wurde
      if (!stringIsActive[i]) {
         //wird der Status auf "aktiv" gesetut
        stringIsActive[i]= true;
        isPiezohit= true;  //Piezo hat Vorrang
        if (DEBUG) {
          Serial.print("Piezo Anschlag auf Saite "); Serial.print(i);
          Serial.print(" → Sound "); Serial.println(piezoSounds[i]);
        }
        player.volume(30);
        player.playFolder(getPiezoFolder(), piezoSounds[i]);
      }
    } else {
            //wenn der Wert unter dem Schwellenwert liegt wird der Status zurückgesetzt
      stringIsActive[i]= false;
    }
  }
  return isPiezohit;
}

//checkTouch(): überprüft den Zustand der Touch-Sensoren und reagiert auf kurze und lange Touch-Ereignisse
void checkTouch() {
  //Wenn gerade ein Piezoschlag erkannt wurde wird Touch ignoriert 
  if (isPiezohit) {
    if (DEBUG) Serial.println("Touch wird ignoriert wegen Piezoschlag");
    return;
  }
  //
  u16 result= mpr121.check_status_register();
  u16 filtered_data_buf[NUM_SENSORS];
  mpr121.get_filtered_reg_data(&result, filtered_data_buf);

  //Itteriert durch alle Sensor Kanäle
  for (int i = 0; i < NUM_SENSORS; i++) {
    int ch= sensorChannels[i];
    //Prüft ob Kanal gedrückt ist
    bool isTouched= (result & (1 << ch));

    if (isTouched && !touchIsGoing[i]) {
      //Touch startet, dabei wird langer kurzer Ton unterschieden
      touchStartTime[i]= millis();
      //Touch erkannt
      touchIsGoing[i]= true;
       //Noch kein langer Touch ausgelöst
      longTouchTriggered[i]= false;
    }

    if (touchIsGoing[i]) {
      //Dauer wird berechent
      unsigned long duration = millis() - touchStartTime[i];

      if (!isTouched) {
        //Kurzer Touch
        if (duration < 300) {
          player.volume(20);
          player.playFolder(getTouchShortFolder(), i + 1);
          if (DEBUG) Serial.println("Kurzer Touch-Sound");
        }
        // Reset
        touchIsGoing[i]= false;
        longTouchTriggered[i]= false;
      } 
      //Falls Touch noch läuft und lang genug ist-> Spielt es ab 
      else if (!longTouchTriggered[i] && duration > 300) {
        player.volume(30);
        player.playFolder(getTouchLongFolder(), i + 1);
        longTouchTriggered[i]= true;
        if (DEBUG) Serial.println("Langer Touch-Sound");
      }
    }
  }
}
//Jeder Button spielt beim Drücken eine unterschiedlichen Sound 
void funButtons() {

  if (digitalRead(funButton1)== LOW) {
    player.stop();
    player.volume(15);
    player.playFolder(8, 1);  
    if (DEBUG) Serial.println("Fun: 1");
    delay(200); 
  }

  if (digitalRead(funButton2)== LOW) {
    player.stop();
    player.volume(15);
    player.playFolder(8, 2);  
    if (DEBUG) Serial.println("Fun: 2");
    delay(200);
  }

  if (digitalRead(funButton3)== LOW) {
    player.stop();
    player.volume(15);
    player.playFolder(8, 3);  
    if (DEBUG) Serial.println("Fun: 3");
    delay(200);
  }

  if (digitalRead(funButton4)== LOW) {
    player.stop();
    player.volume(15);
    player.playFolder(8, 4);  
    if (DEBUG) Serial.println("Fun: 4");
    delay(200);
  }
}

/*Jenach Modus wird ein anderes Instrument abgespielt, 
dabei wird zwischen den Funktion vom kurzen,langem Spielen und dem Zupfen unterschieden*/  
int getTouchShortFolder() {
  if (currentMode== 0) return 1; // Guzheng kurz
  if (currentMode== 1) return 3; // Geige kurz
  if (currentMode== 2) return 5; // Erhu kurz
  return 1;
}

int getTouchLongFolder() {
  if (currentMode== 0) return 1; // Guzheng gleich
  if (currentMode== 1) return 3; // Geige gleich
  if (currentMode== 2) return 7; // Erhu LANG
  return 1;
}

int getPiezoFolder() {
  if (currentMode== 0) return 2; // Guzheng Zupfen
  if (currentMode== 1) return 4; // Geige Zupfen
  if (currentMode== 2) return 6; // Erhu Zupfen
  return 2;
}


void loop(){
  //Überprüft und schaltet je nach modus Button
  if (digitalRead(buttonModus)== LOW) {
    if (currentMode== 0) {
      currentMode= 1;
    } else if (currentMode== 1) {
      currentMode= 2;
    } else if (currentMode== 2) {
      currentMode= 0;
    }
    if (DEBUG){
      Serial.print("Modus gewechselt zu: ");
      if (currentMode== 0) Serial.println("Guzheng");
      if (currentMode== 1) Serial.println("Geige");
      if (currentMode== 2) Serial.println("Erho");
    }

    //einfache Entprellung
    delay(300); 
  }
  //zurücksetzen der Piezo
  isPiezohit= false;  
  //Ausführung der Methoden 
  checkPiezos();
  checkTouch();
  funButtons();
  
}
