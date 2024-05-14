#include "EBYTE.h"

#define PIN_RX 16   // Serial2 RX (connect this to the EBYTE Tx pin)
#define PIN_TX 17   // Serial2 TX pin (connect this to the EBYTE Rx pin)

#define PIN_M0 4    // D4 on the board (possibly pin 24)
#define PIN_M1 22   // D2 on the board (possibly called pin 22)
#define PIN_AX 21   // D15 on the board (possibly called pin 21)

struct DATA {
  unsigned long Count;
  char Message[20];
  unsigned long ADC_Turbidez;
};

unsigned long Last;

DATA MyData;

EBYTE Transceiver(&Serial2, PIN_M0, PIN_M1, PIN_AX);

void setup() {


  Serial.begin(9600);

  Serial2.begin(9600);
  Serial.println("Starting Reader");

  Transceiver.init();
  Transceiver.PrintParameters();


}

void loop() {

  if (Serial2.available()) {

    Transceiver.GetStruct(&MyData, sizeof(MyData));

    Serial.print("Count: "); Serial.println(MyData.Count);
    Serial.print("Message: "); Serial.println(MyData.Message);
    Serial.print("Turbidez: "); Serial.println(MyData.ADC_Turbidez);

    Last = millis();

  }
  else {
    if ((millis() - Last) > 1000) {
      Serial.println("Searching: ");
      Last = millis();
    }

  }
}

