#include "Seeed_MPR121_driver.h" 

const int piezoPin1 = A0; // Erkennung des Zupfens
const int piezoPin2 = A1;
const int buzzerPin = 9;  // Tonquelle

const int tones[12] = {
  262, // C4
  294, // D4
  330, // E4
  349, // F4
  392, // G4
  440, // A4
  494, // B4
  523, // C5
  587, // D5
  659, // E5
  698, // F5
  784  // G5
};

Mpr121 mpr121; // TouchSensor
u16 touch_status_flag[CHANNEL_NUM] = {0};

void setup(){
    Serial.begin(115200);  // <-- Korrekt hier!

    // MPR121 starten
    if (mpr121.begin() < 0) {
        Serial.println("Can't detect device!!!!");
    } else {
        Serial.println("mpr121 init OK!");
    }

    pinMode(buzzerPin, OUTPUT);
    delay(100);
}

void loop(){
    int piezoValue1 = analogRead(piezoPin1);
    int piezoValue2 = analogRead(piezoPin2);
    
    Serial.print("S1: ");
    Serial.print(piezoValue1);
    Serial.print("\tS2: ");
    Serial.println(piezoValue2);

    // Touch Sensor abfragen 
    u16 result = 0;
    u16 filtered_data_buf[CHANNEL_NUM] = {0};
    result = mpr121.check_status_register();
    mpr121.get_filtered_reg_data(&result, filtered_data_buf);

    for (int i = 0; i < CHANNEL_NUM; i++) {
        if (result & (1 << i)) {
            if (touch_status_flag[i] == 0) {
                touch_status_flag[i] = 1;
                Serial.print("Saite: ");
                Serial.print(i);
                Serial.println(" pressed");
                
                int ton = tones[i]; // Tonhöhe nach Saite
                int piezoPower = max(piezoValue1, piezoValue2);

                // je nach Zupfen oder Berühren ein Ton
                // wieso unter 80--> weil es sein kann das die berührung dann auch hierzu zählt und einen kurzen Ton dann ausgeben 
                if (piezoPower > 80) {
                    tone(buzzerPin, ton);
                    delay(600);
                    noTone(buzzerPin);
                    Serial.println(" Zupfen erkannt – Langer Ton");
                } else {
                    tone(buzzerPin, ton);
                    delay(150);
                    noTone(buzzerPin);
                    Serial.println(" Nur Touch - kurzer Ton");
                }
            }
        } else {
            if (touch_status_flag[i] == 1) {
                touch_status_flag[i] = 0;
                Serial.print("Saite ");
                Serial.print(i);
                Serial.println(" released");
            }
        }
    }

    delay(50);
}
