# PolyZheng

1. [Einführung](#einführung) 
    - 1.1 [Was ist ein PolyZheng](#was-ist-ein-polyzheng) 
    - 1.2 [Ideenentwicklung](#ideenentwicklung) 

2. [Hardware](#hardware)
    - 2.1 Verwendete Materialien
        - 2.1.1 [Sensoren](#sensoren) 
        - 2.1.2 [Gehäuse](#gehäuse)
    - 2.2 [Entwicklung](#entwicklung)
        - 2.2.1 [Sensoren Funktionsweise und Testen](#sensoren-funktionsweise-und-testen) 
        - 2.2.2 [Aufbau und Design](#aufbau-und-design) 
        - 2.2.3 [3D Druck](#3d-druck) 

3. [Software](#software) 
4. [Endprodukt](#endprodukt)
5. [Häufige Fehler](#häufige-fehler)
6. [Fazit](#fazit)

<br 
    >
## Einführung
### Was ist ein PolyZheng
PolyZheng ist inspiriert von dem traditionellem, chinesischen Saiteninstrument Guzheng. Anders als bei einem klassichen Saiteninstrument werden die Töne digital erzeugt, indem die verbaute Sensorik die Saitenanspielung erkennt und den entsprechenden Ton ausgibt. Dabei kann man mit dem PolyZheng beliebig viele Instrumente nachahmen. Der Nutzer muss lediglich zwischen den Modi per Knopfdruck umschalten, um zum Beispiel in den Geigen- oder Erhumodus zu wechseln. Um das Spielerlebnis amüsanter zu gestalten, wurden zusätzlich vier lustige Tonaufnahmen von Tieren eingebaut.
### Ideenentwicklung
Die Idee war ein interaktives Saiteninstrument, das viele Töne von verschiedenen Saiteninstrumenten ausgeben kann. Man könnte somit jedes Saiteninstrument planen und diese Funktion einbauen. 
Wir haben uns für das Saiteninstrument Guzheng entschieden. 
Die Musik wird digital durch Anfassen und Zupfen der Saiten ausgegeben. Beim Antasten wird ein Akkord abgespielt, beim Zupfen die einzelne Note. Die Lautstärke wird durch das Zupfen oder das Anfassen kontrolliert. 

#### 1. Prototyp:
Für den ersten Prototyp wurde Pappe als Gewächshaus benutzt.Die sechs Chenilledrähte dienen als Saiten. Diese wurden einem nach dem anderen parallel gespannt und jeweils mit einen einzeldener Saitenhalter befestigt. Die roten Kreise stellen die Vibratorsensoren dar, die man bei jeder Saite angebracht hat. Diese sollen die Schwingungen der Saite erfassen können. Die Brücken vom Ghuzeng wurden durch einen diagonal liegenden Stab stark vereinfacht. 

**Ziel: Vorstellung von Guzheng**

Problem: nicht benutzerfreundlich und die Hardware hätte keine Räumlichkeit

![prototyp1](https://hackmd.io/_uploads/BJDQncxFxl.jpg)

<p align="center">
  <img src="https://hackmd.io/_uploads/HJzQS62Oeg.png" width="310">
</p>
<p align="center" style="font-size: 12px;">
</p>


### 2. Prototyp:
Beim zweiten Protoyp wurde die Nachahmung vom echten Guzheng detallierter und stabiler umgesetzt.
Es wurde mit den genauen Maßheiten und Tiefe gearbeitet. 
Eine große Box wurde am Rand des Spielfeld eingesetzt. Unter dem Spielfeld befindet sich ein Fuß, das für die Stabilisierung sorgt. Es wurde nun mit echten Ghuzengsaiten gearbeitet, die durch zwei seperate Saitenhalter befestigt worden sind. 

Es wurden viele Gedanken über alles mögliche gemacht:
*Wie groß und breit sollen die Saitenhalter sein, sodass die Saite keine Schwingung verliert?
Wie groß soll der Abstaand der Saiten sein, sodass die nächstliegende Saiten nicht beeinschränkt werden?
Wie groß sollte eine Brücke sein, sodass die es keine Probleme bei Vibrationerkennung gibt?
Wie spannt man die Saiten am besten auf?
Welches Material würde am sinnvollsten sein?
Welche Saiten sind leitbar?*

**Ziel: Realistische Nachbildung und Stabilisierung**

**Problem:** Die Pappe wurden immer wieder schnell beschädigt, da sie nicht die starke Spannung der Saiten standhalten konnte.

![prototyp22](https://hackmd.io/_uploads/Byj2R-GFgx.jpg)
![prototypv](https://hackmd.io/_uploads/rkhPKkLFxe.png)


<p align="center">
  <img src="https://hackmd.io/_uploads/ByNBeMMKee.png" width="350" height="600" style="object-fit: cover;">
</p>


### 3. Prototyp:
Beim dritten Protoyp wurde das Spielfeld fertiggestellt und beim Rest wurde weiterhin mit Pappe experimentiert. Der Fokus lag hier darauf, herauszufinden, wie man die Saiten am besten spannt und wie man die Saiten schneller wechseln kann, falls eine beim Spielen kaputt geht.
Die Idee war, die Saiten straff zu spannen, wobei die Haken diese sicher halten sollten. Wie man aber auf dem Bild erkennen kann, konnten die Haken ihren Zweck nicht ganz erfüllen.
Der Stand war aber stabil genug, um die Hardware zu platzieren und testen zu können.
![Screenshot 2025-08-18 142526](https://hackmd.io/_uploads/Sywb2cltlx.png)
<br>
</br>

### Modus:
Es gibt 3 Modi, die man durch Drücken des Knopfes nacheinander auswählen kann.
**1. Guzhengtöne (einmal drücken):**
In diesem Modus gibt 8 tiefe und hohe Töne vom Guzheng.
- Beim längere Drücken wird ein lauter tiefer Ton ausgegegeben.
- Beim kurzen Drücken wird ein leiser tiefer Ton erzeugt. 
- Beim Zupfen wird ein lauter hoher Ton ausgegeben.

**2) Erhutöne (zweimal drücken):**
Hier, beim zweiten Modus, stehen auch 8 verschiedene Töne, also insgesmat 16 verschieden Klänge (pro Saite zwei unterschiedliche Klänge) von der traditionellen Erhu. 
- Beim langen Anfassen wird der Ton laut ausgegeben.
- Beim kurzen Anfassen wird ein kurze Ton leise erzeigt. 
- Beim starken Zupfen wird ebenfalls ein lauter Ton erzeugt

**3. Geigetöne (dreimal drücken):**
Dieser Modus hat das selbe Prinzip wie beim Guzheng-Modus, nur mit  den Giegeklängen.

Man könnte beliebig viele Modus hier erweitern, die Liste könnte unedlich gehen.

![Moduss](https://hackmd.io/_uploads/S1HX3JUFll.jpg)

Außerdem sind hier ebenfalls die Knöpfe zusehen, die Tiertöne ausgeben. Die Modusknöpfe und Tierknopfe teilen einen Platz. Natürlich können sie auch seperat platziert werden. Man muss dann die Verkablung mit der Hardware berücksichtigen.

<br
    >
## Hardware
### Sensoren

 - 8 Piezo Membranen
 - MPR121 Kapazitive Touchsensor
 
 **Steurungselement:**
 - Arduino Uno R3
 
 **Audiokomponente:**
  - DFP Player mini
 - Lautsprecher
 
 **Verbindungskomponente:**
 - Multiplexer mit 16 analogen, digitalen Kanälen
 - Jumper Wires
 - 8x 1K Widerstände
 - 2 Widerstände für Lautsprecher und Mulitplexer
 - 1 großes Breadboard
 - 2 kleine Breadboards

### Gehäuse
**Benötigte Materialien:**

 - 60x32 cm großes Holzbrett für Spielfeld
 - [Zwei Saitenhalterungen](#3D-Druck), um die Saiten zu befestigen
 - 8 E-Gitarrensaiten aus Stahl 
 - [8 Brücken](#3D-Druck) gedacht für Tonverzerrung 
 - 8 E-Gitarren Machine Heads
 - mindestens ca.30x19cm Holzbox für Aufbewahrung der Elektronik, größere Box jedoch empfohlen!
 - 4 kleine Holzbretter, um die Machine Heads daran zu befestigen
 - [3 Standfüße](#3D-Druck) für das Instrument
 
 
 **Zusätzliche Materialien:**
 - Akkuschrauber
 - Holzsäge
 - Montagekleber
 - T-Schrauben um das Holzbrett mit der Box zu verbinden
 - Schrauben, um die kleinen Holzbretter an der Box zu befestigen
 - Schleifpapier
 - ggf. Gitarrenkurbel zum Saitenspannen 
 
<br
    >
## Entwicklung
Im folgenden Kapitel erklären wir Schritt für Schritt, wie wir unser Projekt umgesetzt haben. Dabei zeigen wir, wie wir die einzelnen Bauteile getestet, das Design aufgebaut und Teile im 3D-Druck hergestellt haben. 

### Sensoren Funktionsweise und Testen
Wie bereits erwähnt, haben wir für unser Projekt verschiedene Sensoren eingesetzt, um das Spielgefühl eines echten Saiteninstruments realistisch nachzubilden. Dafür haben wir Sensoren, wie die **Piezo Membranen** und ein **MPR121-Kapazitiver Touchsensor** verwendet, die jeweils die Eigenschaften der Saitenspielung erfassen. 



**Piezo-Membranen** 
Die Piezo-Membranen sind direkt an den Gitarrensaiten befestigt und nehmen die Vibration auf, die beim Zupfen entsteht. Diese Vibrationen werden dann in elektrische Schwingungen umgewandelt, die wir schließlich auswerten können.
> 🔴 **!!!!!! Aber Vorsicht, die Piezos sind sehr sensibel und können sehr empfindlich reagieren (schon auf kleinste Vibrationen🥺)**

Deshalb ist es sinnvoll, die Empfindlichkeit mit verschiedenen Schlagstärken auszuprobieren. Das heißt am besten viele Werte austesten und einen passenden Schwellenwert (Trasholdwert) festlegen, welcher sich gut für das Spielen eignet. 

> 🔴 **!!! Zudem achtet bitte darauf, dass die Piezos fest im Breadboard sitzen.**

**DatenBlatt**:
https://cdn-reichelt.de/documents/datenblatt/A300/SEN-VIB01_ANLEITUNG_2022-01-07.pdf 
    
**Zum Aufbau für das Testen einzelner Piezos:** 
**Benötigte Hardwarekomponente**:
• Arduino Uno R3
• eine oder mehrere Piezo-Membranen 
• Jumper Wires
• Breadboard 

**Schaltkreis** 
    ![PiezoTest](https://hackmd.io/_uploads/HyxxnyZKeg.png)
    
**Code-Abschnitt:** 
```cpp
//Intialisierung der Piezos mit zugeordnetem AnalogPin
const int piezoA= A0;
const int piezoB= A1;
const int piezoC= A2;
//Schwellenwert zur Schlagstärke natürlich anpassbar
const int threshold= 50;

void setup() {
  Serial.begin(115200);
  Serial.println("PiezoTest");
}

void loop() {
// Werte der drei Sensoren werden hier ausgelesen
  int valueA= analogRead(piezoA);
  int valueB= analogRead(piezoB);
  int valueC= analogRead(piezoC);

//Print-Ausgaben
  Serial.print("Piezo A: ");
  Serial.print(valueA);
  Serial.print("\tPiezo B: ");
  Serial.println(valueB);
  Serial.print("\tPiezo C: ");
  Serial.println(valueC);
}
```
<br
    > 
![testenn](https://hackmd.io/_uploads/BkVNZlUKee.png)
![testennn](https://hackmd.io/_uploads/Hyq5-xUKel.png)


**Piezo mit Buzzer Test:** 
**Benötigte Hardwarekomponente**:
• Arduino Uno R3
• eine oder mehrere Piezo-Membranen 
• Jumper Wires
• Breadboard 
• Buzzer 
    
**Schaltkreis** 
![PiezoBuzzerTest](https://hackmd.io/_uploads/SJEm21WYxx.png)


**Code-Abschnitt**: 
```cpp
const int piezoPin1= A0;
const int piezoPin2= A1;
const int piezoPin3= A2;
const int THRESHOLDWERT= 30;  

// Buzzer an Pin 8 angeschlossen
const int buzzerPin= 8;


void setup() {
  Serial.begin(115200);
  pinMode(buzzerPin, OUTPUT);
  Serial.println("Piezo mit Buzzer Test");
}


void loop() {
    int piezoValue1= analogRead(piezoPin1);
    int piezoValue2= analogRead(piezoPin2);
    int piezoValue3= analogRead(piezoPin3);

    Serial.print("Piezo1: ");
    Serial.print(piezoValue1);
    Serial.print("\tPiezo2: ");
    Serial.print(piezoValue2);
    Serial.print("\tPiezo3: ");
    Serial.println(piezoValue3);

/*Wenn der Schwellenwert erreicht wird zum entsprechenden 
 * Piezo ein Ton durch den Buzzer  ausgegeben*/
    if (piezoValue1 > THRESHOLDWERT) {
        tone(buzzerPin, 523); // Spielnote C5
        delay(200);
        Serial.println("");
        noTone(buzzerPin);
    } else if (piezoValue2 > THRESHOLDWERT) {
        tone(buzzerPin, 587); // Spielnote D5
        delay(200);
        Serial.println("");
        noTone(buzzerPin);
    } else if (piezoValue3 > THRESHOLDWERT) {
        tone(buzzerPin, 659); // Spielnote E5
        delay(200);
        Serial.println("");
        noTone(buzzerPin);
    }

    delay(10); // kleine Pause
}
```

<br
    >
**MPR121 – kapazitiver Touchsensor**

Zur Erkennung der Berührung haben wir einen MPR121 Touch Sensor verwendet, der 8 Kanäle hat, die wir jeweils auf 8 Stahlsaiten gelegt haben. Dabei muss der Touchsensor mit den Gitarrensaiten verbunden werden, entweder mit Krokodilklemmen oder selbst zugeschnittenen Wires. Das heißt, jede Saite ist genau an einem Kanal angeschlossen und wird als einzelner Touch registriert. So kann letztlich jede der 8 PolyZheng-Saiten unabhängig voneinander spielen.  

> 🔴 **!!! Wichtig: der Touchsensor ist eigentlich total zuverlässig und macht auch fast keine Probleme. Er ist zwar sehr sensibel, aber stabiler als die Piezos. Schwierigkeiten bestehen nur dann, wenn dieser auf etwas liegt oder in Kontakt mit anderem elektrischem Material kommt.**

Damit der kapazitive Touchsensor überhaupt funktioniert, muss hierzu zusätzlich eine **Bibliothek** eingebunden werden. Die findet ihr hier:  https://github.com/linux-downey/Grove_touch_sensor_MPR121 

**DatenBlatt:** https://wiki.seeedstudio.com/Grove-12_Key_Capacitive_I2C_Touch_Sensor_V2-MPR121/#version-change 


**Zum Aufbau für das Testen des Touchsensors:** 
**Benötigte Hardwarekomponente:** 
• Arduino Uno R3
• MPR121-kapazitiver Touchsensor
• Jumper Wires

Die folgende Abbildung hat leider einen Arduino Uno verwendet, weshalb hier 
SDA auf dem AnalogPin A4 und SCL auf den AnalogPin A5 verlegt. Sonst ist es in der Regel auf dem Arduinoboard als SCL und SDA separat beschriftet. 

**Schaltkreis** 
    ![TouchTest](https://hackmd.io/_uploads/r1hHhJZKgx.png)

**Code-Abschnitt:** 
```cpp
#include "Seeed_MPR121_driver.h"

//TouchSensor anlegen
Mpr121 mpr121;

// Array zum Speichern des Touchs
u16 touches[CHANNEL_NUM]={0};

void setup(){
//Überprüfung ob MPR121 funktioniert
  s32 ret=0;
  Serial.begin(115200);
  if(mpr121.begin()<0){
    Serial.println("Can't detect device!!!!");
  }else{
    Serial.println("mpr121 init OK!");
  }
  
  delay(100);
}

void loop(){
  u16 result=0;// Variable für Statuswerte
  u16 filtered_data_buf[CHANNEL_NUM]={0};       // Array für gefilterte Daten (Messwerte)
  u8 baseline_buf[CHANNEL_NUM]={0};            // Array für Basiswerte
  
  result=mpr121.check_status_register();      // Statusregister abfragen: welche Tasten berührt wurde

  mpr121.get_filtered_reg_data(&result,filtered_data_buf);// Gefilterte Messwerte abrufen

//Iteration durch alle Kanäle 
  for(int i=0;i<CHANNEL_NUM;i++){
      //Kanal gedrückt 
    if(result&(1<<i)){
      if(0==touches[i]){ 
        touches[i]=1;
        Serial.print("Saite ");
        Serial.print(i);
        Serial.println(" pressed");
      }
    }else{
        //Kanal nicht gedrückt
      if(1==touches[i]){
        touches[i]=0;
        Serial.print("Saite ");
        Serial.print(i);
        Serial.println(" release");
      }
    }
  }
  delay(50); 
}
```
<br
    >
Nun, wenn man den Sensor einmal umdreht, sieht man die Default-Adresse (0x5B), mit der der MPR121 angesprochen wird. Über diese Adresse wird unterschieden, welches Signal von welchem Sensor kommt. Das heißt, um das Instrument erweitern zu können, muss der zweite Touchsensor eine andere I²C-Adresse besitzen, den sonst antworten diese gleichzeitig auf die Anfragen des Arduinos und es kommt zu einer Adresskollision (Daten können nicht mehr zuverlässig ausgelesen werden).

![touchhinten](https://hackmd.io/_uploads/H1LGAkWtxl.png)

Alternativ lässt sich auch ein manueller kapazitiver Touch verwenden, der den gleichen Zweck erfüllt, nur mit etwas mehr Aufwand. 

**Benötigte Hardwarekomponente für einen manuellen Touch:**
• Arduino Uno R3
• Kondensator 
• Widerstand (1 MΩ)
• Jumper Wires

Hier bitte als erstes diese **Bibliothek** einbinden: https://github.com/PaulStoffregen/CapacitiveSensor

**Schaltkreis** 
    ![Manueller Touch](https://hackmd.io/_uploads/B1w_CyWYxe.png)


**Code-Abschnitt:**

```cpp
#include <Arduino.h>
#include <CapacitiveSensor.h>

// Ein kapazitiver Sensor wird erstellt:
// Pin4= sendet Signal
// Pin2= misst die Berührung
CapacitiveSensor capcitivSensor = CapacitiveSensor(4, 2);

// Schwellwert für die Entscheidung, ob ein touch vorliegt
const long TOUCH_THRESHOLD = 50;

// Grundwert ohne Berührung 
long baseline;

void setup() {
  Serial.begin(115200); 
  capcitivSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);

  // Kurz warten, dann Baseline messen -> Grundrauschen ohne Finger
  delay(500);
  baseline = capcitivSensor.capacitiveSensor(30);
  Serial.print("Baseline: ");
  Serial.println(baseline);
}

void loop() {
  /* Rohwert wird gemessen (30 Samples) in µs
     --> je höher desto höher die Kapazität (Finger dran) */ 
  long value = capcitivSensor.capacitiveSensor(30);

  // Delta gegenüber Baseline
  long delta = value - baseline;
  if (delta < 0) delta = 0;

  // Ist Delta größer als 50 -> Touch erkannt, sonst kein Touch
  if (delta > TOUCH_THRESHOLD) {
    Serial.println("berührt");
  }
  else {
    Serial.println("nicht berührt");
  }

  delay(100);
}
```
![kapizität](https://hackmd.io/_uploads/B1OkdlLFgg.jpg)
<br>
**Audiokomponente**
Natürlich ist es an der Stelle auch wichtig zu testen, ob alle Audiokomponente funktionieren, sonst wäre unser PolyZheng zwar hübsch, aber stumm wie ein Fisch.
Hierzu haben wir den **DFP-Player Mini** verwendet. Dieser ist ein kleiner MP3-Player, den man mit einem Lautsprecher verbinden kann. Dabei liest der DFP-Player die Töne aus einer SD-Karte und spielt sie je nach Funktion und Steuerung ab. Das Gute an dem Player ist, dass er die ganze komplizierte Audioverarbeitung selbst übernimmt. 
    
**DatenBlatt:** https://wolles-elektronikkiste.de/dfplayer-mini-ansteuerung-mit-dem-arduino 
**Benötigte Bibliothek:** https://github.com/DFRobot/DFRobotDFPlayerMini 
    
**Schaltkreis**
![dfpm](https://hackmd.io/_uploads/ByoSpkbtxl.png)


**Benötigte Hardwarekomponente:** 
• Arduino Uno R3
• DFP-Player Mini
• SD-Karte für die Töne 
• Lautsprecher
• Widerstand (1 KΩ)
• Breadboard 
• Jumper Wires (ggf Krokodilklemme für den Lautsprecher)
    
> 🔴 **!!! Passt auf TX vom Arduino gelangt zu RX auf DFP-PlayerMini genauso RX vom Arduino zu TX auf DFP-Player Mini und Widerstand kann raus fallen, also überprüft schön.**

    
**Code-Abschnitt:**
In dem Codeabschnitt wird nur der erster Track abgespielt. 
```cpp
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

// DFPlayer Mini-Konfiguration
SoftwareSerial softSerial(/*rx=*/10, /*tx=*/11);
#define FPSerial softSerial
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  // Serielle Ausgaben
  Serial.begin(115200);
  FPSerial.begin(9600);

  // DFPlayer initialisieren
  Serial.println(F("DFPlayer Initialisierung... (3–5 Sek.)"));
  if (!myDFPlayer.begin(FPSerial, /*isACK=*/true, /*doReset=*/true)) {
    Serial.println(F("DFPlayer nicht erkannt"));
    while (true) delay(100);
  }
  Serial.println(F("DFPlayer Start bereit!"));
  myDFPlayer.volume(30);  // Lautstärke (0–30)
  
  // Starte mit Track 1
  myDFPlayer.play(1);
}

```
Falls ihr alle Sounds auf der SD-Karte hören möchtet könnte man zusätzlich diesen Codeabschnitt zum testen verwenden. 
```cpp
void loop() {
  //Prüfen, ob der DFPlayer ein Ereignis gemeldet hat
  if (myDFPlayer.available()) {
    /*readType() gibt zurück welche Ereignise passiert sind
    ob ein Track zu ende gespielt hat oder Fehler passiert sind*/
    uint8_t type = myDFPlayer.readType();

    //read() gibt den Wert zum Ereignis zurück, also die Nummer des fertigen Tracks
    int value = myDFPlayer.read();

    //Überprüfung ob ein Track zu ende gespeilt hat
    if (type == DFPlayerPlayFinished) {
      Serial.print(F("Track fertig: "));
      Serial.println(value);  
      //wenn ja wird der nächsten Track abspielt
      myDFPlayer.next();
    }
  }
}
```
<br></br>
<div style="display: flex; flex-direction: column; align-items: center; gap: 20px;">
  <figure style="width: 80%; max-width: 600px; max-height: 300px; margin: 0;">
    <img src="https://hackmd.io/_uploads/HJRlslLtxl.png" alt="steg" style="width: 100%; height: 100%; object-fit: contain;">
  </figure>
</div>
<br>
    </br>
<br>
    </br>
    
    
Nun, wenn ihr zunächst die Sensoren, also **die Piezo-Membranen und den kapazitiven Touchsensor gemeinsam testen wollt**, könnt ihr hier weitermachen, sonst kann dieser Abschnitt erstmal übersprungen werden. 

**Benötigte Hardwarekomponente:** 
• Arduino Uno R3
• eine oder mehrere Piezo-Membranen 
• Buzzer
• MPR121-kapazitiver Touchsensor
• Jumper Wires
• Breadboard 

**Schaltkreis** 
![KompleterTestpng](https://hackmd.io/_uploads/HJ0vakbYll.png)


**Code-Abschnitt:** 
```cpp
#include "Seeed_MPR121_driver.h" 

// Erkennung des Zupfens
const int piezoPin1 = A0; 
const int piezoPin2 = A1;
// Lautsprecher->Buzzer Pin
const int buzzerPin = 8; 

// Tonhöhen
int tones[8] = {262, 294, 330, 349, 392, 440, 494, 523};
// merkt sich die zuletzt berührte Saite
int lastTouchedIndex = -1; 
// TouchSensor
Mpr121 mpr121; 
u16 touches[CHANNEL_NUM] = {0};

void setup(){
    Serial.begin(115200);  

    // MPR121 starten
    if (mpr121.begin() < 0) {
        Serial.println("Can't detect device!!!!");
    } else {
        Serial.println("mpr121 init OK!");
    }

    delay(100);
}

void loop(){
    int piezoValue1 = analogRead(piezoPin1);
    int piezoValue2 = analogRead(piezoPin2);

    // Schlagstärke aus Piezo berechnen (größter Wert)
    int piezoPower = max(piezoValue1,piezoValue2); 
    Serial.print("S1: ");
    Serial.print(piezoValue1);
    Serial.print("\tS2: ");
    Serial.print(piezoValue2);

    // Touch Sensor abfragen 
    u16 result = 0;
    u16 filtered_data_buf[CHANNEL_NUM] = {0};
    result = mpr121.check_status_register();
    mpr121.get_filtered_reg_data(&result, filtered_data_buf);

    //Überprüfung ob der Touch erkannt worden ist 
    for (int i = 0; i < CHANNEL_NUM; i++) {
        if (result & (1 << i)) {
            lastTouchedIndex = i;
            if (touches[i] == 0) {
                touches[i] = 1;
                Serial.print("Saite: ");
                Serial.print(i);
                Serial.println(" pressed");
                
                int ton = tones[i];
                tone(buzzerPin, ton);
                delay(150);
                noTone(buzzerPin);
                Serial.println(" Nur Touch - kurzer Ton");
            }
        } else {
            if (touches[i] == 1) {
                touches[i]= 0;
                Serial.print("Saite ");
                Serial.print(i);
                Serial.println(" released");
            }
        }
    }
    // Wenn stark gezupft wurde und vorher ein Touch da war
    if (piezoPower > 10 && lastTouchedIndex != -1) {
        Serial.print("Zupfen ohne Touch erkannt – Saite: ");
        Serial.println(lastTouchedIndex);
        tone(buzzerPin, tones[lastTouchedIndex]);
        delay(600);
        noTone(buzzerPin);
    }

    delay(50);
}
```
![test](https://hackmd.io/_uploads/HyjnJxLYlx.jpg)


<br
    >
    
## Aufbau und Design

Die meiste Zeit nahm die Anfertigung des Gehäuses in Anspruch. Bei einem echten Guzheng klappt man die Schatulle (bzw. Tuning Box) auf und wechselt die Saiten. 
![Bild](https://hackmd.io/_uploads/rJI4PceFex.jpg)
<sub>Quelle: https://guzhengalive.com/guzheng-terminology</sub>

Für dieses Projekt wird die Tuning Box allerdings anders interpretiert. In ihr befindet sich nämlich das Herzstück des PolyZheng Projekts: die gesamte Elektronik samt der Verkablung, den Machine Heads und den Saiten. Dementsprechend muss man viel Geduld und Planung aufbringen. 
<p align="center">
  <img src="https://hackmd.io/_uploads/Hy7Lqiltxx.jpg" alt="Box1" width="310" height="200" style="object-fit: cover;">
  <br>
  <small>Piezo und Breadboard (Teilansicht)</small>
</p>

<p align="center">
  <img src="https://hackmd.io/_uploads/B1yYLjxYgl.jpg" alt="Box2" width="310" height="200" style="object-fit: cover;">
  <br>
  <small>Box mit Piezo (ohne Touchsensoren)</small>
</p>


<br></br>
#### Schritt 1: Holzbox
Zuerst holt man sich eine Holzbox mit einem Deckel, mindestens in der Größe von 30x19cm. Da darin 3 Breadboards und ein Ardunio Platz finden müssen, ist es ratsamer, eine noch größere Box zu verwenden. 


<br></br>
#### Schritt 2: Machine Heads anbringen
Jetzt kommen wir zu dem wichtigsten Teil des ganzen Projekts: den Gitarrensaiten. Diese sind sehr dehnbar, neigen dazu, ihre Form schnell zu verlieren und brauchen deshalb einen starken Halt. Die beste Lösung hierfür sind Machine Heads. In diese kann man die Saiten einstecken und um sie wickeln. Die Köpfe sind so konzipiert, dass man die Saiten problemlos zu- und aufdrehen kann, um die Spannung zu erhöhen oder zu verringern. So ist gewährleistet, dass die Saiten nicht willkührlich lose schwingen und die Piezo Membranen die Vibration auffangen können. Gespannte Saiten, die wirklich stramm sitzen, sind für die Funktionsweise der Piezo unerlässlich. 
<br></br>
**Vorgehensweise**:
• Langes Holzbrett mit einer Breite von mindestens 5cm besorgen bzw. so breit, dass die Machine Heads Platz finden
• Löcher vorzeichnen und nach jedem 2. Loch einen geraden Strich zum späteren Durchtrennen vormerken
• Mit dem Akkuschrauber Löcher für die Machine Heads bohren
• Das Holzbrett in 4 gleichgroße Stücke sägen
• Machine Heads anbringen
    
> 🔴 Die Machine Heads auf jedem Holzstück sollen jeweils in entgegengesetzte Richtungen zeigen und nicht nebeneinander in die gleiche Richtung-> **Saiten dürfen sich auf keinen Fall berühren**
    
• Die 4 Holzstücke mit Schrauben an der Innenseite der Box befestigen
<br></br>
#### Schritt 3: Saitenwege einbauen
Da die Sensoren sehr empfindlich sind, muss unbedingt sichergestellt werden, dass sich die Saiten niemals berühren. Hierfür werden unteranderem Saitenstege bzw. Saitenhalterungen verwendet (siehe 3D Druck). Damit die Saiten auch sich in der Box nicht berühren, müssen folgendes noch erledigt werden:

> 🔴 Gegenüber den Machine Heads bzw. an der der Stelle sägen, wo die Box mit dem Holzbrett verbunden wird

• Fingerbreite Rechtecke in die Box sägen

• Mit Schleifpapier glatt schleifen, um Saiten und Finger zu schützen
    <br></br>
#### Schritt 4: Holzbox mit Holzbrett verbinden
Jetzt sind das Holzbrett und die fertig modellierte Holzbox bereit mit einem L-förmigen Schraube verbunden zu werden.
    <br></br>
#### Schritt 5: Saitensteg auf Holzbrett kleben
3D-gedruckte Saitenstege mit Montagekleber an die äußeren Rände des Holzbrettes befestigen und trocknen lassen. Dasselbe gilt auch für die 3D-modellierten Standfüße. Diese werden unterhalb des Holzbretts plaziert und festgeklebt. 
<br></br>
#### Schritt 6: Saiten aufspannen
Saiten können durch die Saitenstege und zuletzt in die Machine Heads durchgeführt und umwickelt werden. Mit einer Zange können die Saiten vorsichtig gekürzt werden. Dabei ist unbedingt darauf zu achten, dass sich die Saitenenden keinesfalls berühren, da insbesondere die kapazitiven Touchsensoren sehr empfindlich sind.
<br></br>

> 🔴 **Allgemein gilt: Die Saiten dürfen niemals irgendwelche Kabel oder Saiten berühren!**

<br></br>
#### Schritt 7: Elektronik einbauen
Zu guter Letzt können die Breadboards und das Arduino Board vorsichtig in die Box gelegt werden. Die Piezo Mebranen müssen nah an den Saiten liegen, da ihre Verkablungen relativ kurz sind.  Die Piezo können mit Tesafilm an den Saiten befestigt werden. Wichig ist, dass so wenig Zug wie möglich auf die Piezo Membranen wirken. Diese sind nämlich sehr empfindlich und reißen schnell, weswegen man aufwendig Löten muss. Es kommt durchaus vor, dass die Piezos im Anschluss dann nicht mehr zuverlässige Werte liefern.

<br></br>


<p align="center">
  <img src="https://hackmd.io/_uploads/HkaHYalYgx.jpg" alt="piezo" width="250">
</p>

<p align="center" style="font-size:12px;">
  <em>Piezo optimale Höhe und an den Saiten befestigt</em>
</p>


<br></br>

### 3D-Druck 
Für kleine Komponenten eignen sich selbst modellierte 3D-Objekte gut. Als 3D-Software wurde **Autovision360** genutzt, da man die Grundlagen im Gegensatz zu Blender relativ zügig lernen kann. Die Auswahl der 3D-Software bleibt allerdings eine reine Geschmackssache. Damit die Gitarrensaiten fest gespannt werden können und nicht auf den Boden aufliegen, sind Saitenhalterungen die beste Lösung. Zwar sind in einem echten Guzheng ebenso Halterungen vorhanden, doch unterscheiden sie sich hinsichtlich der Form enorm. 

#### Saitenhalterungen
Für dieses Projekt hat sich die T-Form bewährt. Das Besondere daran ist, dass man die breite, flache Seite (das umgedrehte T) auf dem Holzboden mit Montagekleber befestigen kann und die dünnere Seite wird dann für die Saiten verwendet. Die eingebohrten Löcher sind sehr praktisch, da die Saiten problemlos hindurch geführt werden können und nicht herausrutschen. Zusätzlich kann man dadurch auch sehr einfach die Saiten austauschen, da diese durchaus reißen können. Der Zug auf den Saitenstegen und den Saiten selbst sind dabei nicht zu unterschätzen. Die nach oben verlaufenden Schlitze dienen dazu, Spannung freizulassen. Falls der Saitensteg zu lang für den Drucker sein sollten, muss man den Körper mittig teilen und kann wie auf den Bildern eine Steckerfunktion einbauen. 
<br></br>



<p align="center">
  <img src="https://hackmd.io/_uploads/HJ5cclUtee.jpg" alt="Saitensteg 1" width="600">
</p>

<p align="center"><em>Saitensteg Modellierung für 10 Saiten</em></p>

<br>

<p align="center">
  <img src="https://hackmd.io/_uploads/SyancgIKeg.jpg" alt="Saitensteg 2" width="600">
</p>

<p align="center"><em>Löcher und Schlitze mit einheitlichem Abstand je 26,571 mm</em></p>

<br></br>

<table align="center">
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/rJ52ag8tlx.jpg" width="200"><br>
      <small><strong>Seitenansicht:</strong> T-Form</small>
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/rJ0txZ8Flx.jpg" width="200"><br>
      <small>Mit Steckerfunktion</small>
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/HyIa5g8Yge.jpg" width="200"><br>
      <small>Für besseren Halt</small>
    </td>
  </tr>
</table>



<br></br>
<br></br>


**Für Saitenhalterungen folgende Maße verwenden:**
Länge: 310.00mm
Höhe: 40.00mm
Breite: 30.00mm
Löcher: 3mm (verwendete Gitarren max 2,5mm breit )
Infill: mind. 80%
Stückzahl: 2
Druckdauer: ca. 5 Std. je Stück
<br></br>

#### Brücke und Standfüße
Das Design ist frei wählbar, nur die Funktion soll nicht beeinträchtigt werden.
Die Brücken sollen haltbar sein, sodass alle stabil auf dem Spielfeld stehen können. Auf der Brücke wurde eine Öffnung für die Saiten gefertigt. Wichtig ist, dass man die Öffnung groß genug gestaltet, damit alle Saiten problemlos durchgehen können, da die Saiten unterschiedliche Breiten besitzen.
Die Füße sollen weit und groß genug sein, damit die Guzheng fest stehen kann.

**Für die Brücken wurden diese Maße benutzt:**
Länge: 50.00mm
Höhe: 25.00mm
Breite: 40.00mm
Öfnung breite:2.5mm
Öfnung länge:2.5mm
Stückzahl: 8 (eine pro Saite)
Druckdauer: ca. 20-30 min je Stück
<table align="center">
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/HyhqaoxKle.png" width="200">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/r1f36olKlg.png" width="200">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/Bk_hpogtxx.png" width="200">
    </td>
  </tr>
</table>

<br></br>

<p align="center">
  <img src="https://hackmd.io/_uploads/SJgrVsEYxx.png" width="300">
</p>

<p align="center"><em>Endergebnis</em></p>


<br></br>

**Für die Füße wurden diese Maße benutzt:**
Länge: 50.00mm
Höhe: 25.00mm
Breite: 0.00mm
Stückzahl: 3
Druckdauer: ca. 30 min je Stück

<table align="center">
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/Bk99Rogtll.png" width="220">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/ByMsCsxKxe.png" width="220">
    </td>
  </tr>
</table>

<p align="center">
  <img src="https://hackmd.io/_uploads/B1CMQzzYgl.png" width="300">
</p>

<p align="center"><em>Endergebnis</em></p>


## Software
In der Finale Version des PolyZhengs hatten wir, wie bereits schon erwähnt, 8 Gitarrensaiten verwendet, jeweils mit 8 Piezo Membranen und einem MPR121 kapazitiven Touchsensor. Da unser Arduino jedoch nur 5 Analoge Pins besitzt, konnten anfangs nicht alle Piezo-Membranen direkt angeschlossen werden. Deshalb haben wir an der Stelle einen Multiplexer verwendet. Der eingesetzte Multiplexer stellt uns dabei 16 Analoge Pins zur Verfügung. Dadurch können alle acht Piezo-Membranen problemlos über einen einzigen Arduino Analogeneingang angebunden werden.
<p align="center">
  <img src="https://hackmd.io/_uploads/Hy5rR-LKlx.jpg" width="200">
</p>


> 🛑 **!!! Unser Tipp:  Von Anfang an alles durch strukturiert organisiert planen. Andernfalls kann es passieren, dass ihr wie wir zeitweise nicht weiterarbeiten könnt, weil Bestellungen oder wichtige Hardware-Komponenten fehlen und euch dadurch wertvolle Zeit verloren geht.**
    
**Schaltkreis**
    ![FINAL](https://hackmd.io/_uploads/BySBcu4tgl.png)

    
**Finaler Code:** 
```cpp
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

```

Die Struktur der Hardware muss man aber immer wieder anpassen, bis man die passende gefunden hat.
    


### **Fehlversuch:**

<p align="center">
  <img src="https://hackmd.io/_uploads/Hy33ebIKeg.jpg" width="500">
</p>




### **Endergebnis:**

<p align="center">
  <img src="https://hackmd.io/_uploads/rkb-0l8tex.jpg" width="500">
</p>

<p align="center">
  <img src="https://hackmd.io/_uploads/Bk17L-8txl.png" width="500">
</p>

<p align="center">
  <img src="https://hackmd.io/_uploads/Sk09SZUKlx.jpg" width="500">
</p>


    
<br
    >

## Endprodukt
Sind alle Schritte abgeschlossen, ist der PolyZheng bereit zum Spielen.
    

<table align="center">
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/rySPBWLYlx.jpg" width="240">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/r1MrPSZIteg.jpg" width="240">
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/S1od_WIYee.jpg" width="240">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/H1HRwWIKel.png" width="240">
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://hackmd.io/_uploads/rJ5cPZLYle.png" width="240">
    </td>
    <td align="center">
      <img src="https://hackmd.io/_uploads/By5u_ZUYxl.jpg" width="240">
    </td>
  </tr>
</table>



<br></br>

In der Dropbox sind einige Videos dabei, die das Spielen des Polzhengs sowie seine verschiedene Funktionen zeigen.
> https://www.dropbox.com/scl/fo/demifdns3611n57cisuk2/AKaXblQh6xjLhzL-dUSTePg?rlkey=r32y6hr763pwaewg9bd2689t7&st=joaoaovk&dl=0 



<br>

## Häufige Fehler

Im Laufe des Projekts sind zahlreiche Probleme aufgetaucht und viele auch wiederkehrend. Um Zeit zu sparen, sollte dieses Cheatsheet am besten Schritt für Schritt abgearbeitet werden. 

**Fehlerquelle Nummer 1: Die Gitarrensaiten sind zu lose**
> **🛑 Problem:**
>Die Piezo Membranen liefern entweder gar keine Werte oder die umher schwingenden Saiten übertragen die Schwingung in die benachbarten Saiten und die ertönenden Töne werden zu Krach. 
>
**Lösung:**
Die Anordnung der Machine Heads (MH) ist entscheidend! Sie müssen seitlich positioniert sein *(siehe Bild rechts)*, ansonsten fliegen die Gitarrensaiten heraus. 

**Bonus Tipp:**
Echte Gitarrenköpfe erleichtern die Arbeit enorm. Von Schrauben- oder sonstigen Befestigungsexperimenten sollte man lieber die Finger lassen.
**Hier gilt tatsächlich: Widerstand ist zwecklos.**
<br></br>
<table align="center">
  <tr>
    <td align="center" width="300">
      <img src="https://hackmd.io/_uploads/rkCRJ7ZYll.jpg" width="280"><br>
      <span style="font-size: 12px;"><strong>Falsch:</strong> MH liegen auf einer Linie und Saiten verlaufen gerade</span>
    </td>
    <td align="center" width="300">
      <img src="https://hackmd.io/_uploads/Byvvem-Feg.jpg" width="280"><br>
      <span style="font-size: 12px;"><strong>Richtig:</strong> MH stets seitlich versetzt angereiht sowie auf einer Linie mit den Saiten</span>
    </td>
  </tr>
</table>



<br></br>


**Fehlerquelle Nr 2:** Piezos zeigen wirre Werte an
> **🛑 Problem:**
>Die Piezo Membranen zeigen entweder keine, niedrige oder zu hohe Werte an.

**Lösung:**
Zuerst Fehlerquelle Nr 1 beheben, ohne Ausnahme.

*Ansonsten helfen mehrere Maßnahmen:*
• Vollkontakt gewährleisten: Die Piezo müssen auf den Saiten kleben
• Die Membranen brauchen Platz zum Schwingen
• Richtig herum und fest ins Breadboard stecken
• Zug auf die Verkabelung sollte vermieden werden, da sich die Piezo gerne unbemerkt vom Breadboard lösen
• Bei zu hohen Werten unbedingt Threshhold erhöhen bzw anpassen
• Threshold anpassen, wenn auch bei ungespielten Saiten Werte angezeigt werden
• Da die Holzbox die Vibrationen dämpfen kann, sollten die Piezo Membranen nicht innerhalb der Box liegen! *(siehe Abschnitt 2.2.2, Schritt 7)*
• Widerstände vorallem beim Einsatz von mehreren Piezo Membranen verwenden, da Datenfluss sehr hoch sein kann und Restspannungsströme auf dem Breadboard zu ungewöhnlichem Verhalten führen. 
<br></br>   
**Fehlerquelle Nr 3: Touch Sensor funktioniert nicht**
> **🛑 Problem:**
>Der sonst so zuverlässige Touchsensor erkennt keine Saitenberührungen mehr

**Lösung**
Da der MPR121 sehr empfindlich ist, muss sichergestellt werden, dass die Saiten mit **nichts** in Berührung kommen. Man kann das nicht oft genug betonen.

• Gitarrensaiten sind meist zu lang und sollten ordentlich gekürzt werden (max. eine Fingerlänge nach dem Aufspannen als Richtwert) sodass die Saiten am besten frei liegen und weder mit dem Holz, Metall oder benachbarten Saiten in Berührung kommen
• Auch Jumper Wires sind vom MPR121 und den Krokodilsklemmen unbedingt fernzuhalten, ggf. Jumper Wires festkleben


> 🛑 Im gesamten Projekt verursachten die Touchsensoren die wenigsten Probleme. Sie sind sehr präzise und meistens liegt der Fehler an kleinen unbeabsichtigten Berührungen, die den Sensor stören. 

<br></br>
**Generelle Anmerkungen, um Fehler zu vermeiden:**
Im Laufe des Projektes hat sich herausgestellt, dass eine gute **Organisation und Struktur** enorm wichtig ist! 

Zum Beispiel sind nur eine **begrenzte Anzahl an analogen und digitalen Pins** verfügbar. Am Ende musste die Idee eines LCD Displays mit unterhaltsamen Emojis verworfen werden, da keine Pins mehr zur Verfügung standen. Das Arduino hat 5 analoge Pins und mithilfe des Multiplexers konnte man geschickt diese Einschränkung umgehen. So erhielt man 16 zusätzliche Kanäle. Allerdings beanspruchte der Multiplexer wiederum seinerseits digitale Pins. 

Auch erwies sich die anfangs riesig wirkende Holzbox als etwas zu klein. Durch ständige auswechseln der Saiten, Piezo und Widerstände Auf- und Abbauen und durch die Neuanbringung der Machine Heads wurde der Innenraum sehr eng. Die Machine Heads sollten ursprünglich nicht in der Box herausragen *(siehe Fehlerquelle Nr 1, Bild links)*. Ebenso war die Verwendung des manuellen Touchsensors geplant, um die geplanten 10 Saiten zu verwenden (der MPR121 hatte nur 8 Kanäle für 8 Saiten zur Verfügung). Auch hierfür war letzten Endes kein Platz mehr verfügbar. Dabei muss man bedenken, dass der manuelle Touchsensor sogar empfindlicher als der normale kapazitive Touchsensor ist und daher noch mehr Achtsamkeit benötigt. 

Oft war viel Geduld und eine ruhige Hand gefragt. Der Einsatz von Pinzetten, um Jumper Wires fest ins Breadboard zu bringen, war tägliche Arbeit.

<br></br>
## Fazit
PolyZheng ist ein sehr vielseitiges und flexibeles Instrument, da es sich in viele Aspekte erweitern lässt.
Es können beliebig viele Saiten eingebaut werden, wobei die Software und Hardware dementsprechend angepasst werden muss. Dies kann man aber ohne große Probleme lösen. 
Man kann beispielsweise mehrere unterschiedliche MPR121 Kapazitive Touchsensor einsetzen oder sogar eigene manuelle Touchsensoren entwickeln.
Durch den Einsatz vom Multiplexer wäre das Problem der Piezos und den begrenzten analogen Pins auf dem Arduino ebenfalls gelöst.
Mit mehreren Lautsprechern oder mit einem zusätzlichen DFP-Player Mini, können sogar Töne gleichzeitig abgespielt werden. Dies würde das Spieleerlebnis deutlich realistischer machen.

Außerdem lassen sich im DFP-Player Mini auch andere Klänge, die keine Instrumente sind, speichern. Der Fantasie sind dabei keine Grenzen auferlegt.
Die Knöpfe können zum Beispiel als Reaktionsknöpfe dienen, die nach oder während eines Musikstücks eine bestimmte Rückmeldung geben.
Ebenfalls eröffnen sich durch Anfassen und Zupfen viele kreative Überlegungen:

*Was passiert, wenn ich lange drücke?
Was passiert, wenn ich kurz drücke?
Was passiert, wenn ich stark zupfe?
Was passiert, wenn ich kurz drücke?*

So kann man mit den Klängen für viel Unterhaltung sorgen.
Die Brücken in dieser Anleitung haben keine Tonverzerrung-Funktion, anders als z.B. bei einem echten Guzheng. Wer diese spezielle Funktion aber einbauen möchte, muss dies durch die Software regulieren. Dafür müsste man für die doppelte Anzahl der Hardware (Piezo Membranen) verwenden, da eine Gitarrensaite an beiden Enden mit Sensorik bestückt werden muss, um an zuverlässige Werte zu gelangen. 

Auch könnte man den Einsatz einer weiteren Sensorik, wie z.B. eines Force-Sensing-Resistors, in Erwägung ziehen. Letzten Endes hängt es davon ab, welche Zusatzfunktionen man noch einbauen möchte, da das PolyZheng beinahe grenzenlose Erweiterungsmöglichkeiten bietet.

Abschließend kann man sagen, dass dieses Projekt nicht nur technische Kentnissse, sondern auch Erfahrung über, wie man mit einem Projekt um- und voran geht, vermittelt. Dabei spielten Organisation, Geduld und Struktur eine zentrale Rolle. 
In einer gut harmonierenden Gruppe kann die Arbeit mit viel Motivation und Freude vorangetrieben werden.
