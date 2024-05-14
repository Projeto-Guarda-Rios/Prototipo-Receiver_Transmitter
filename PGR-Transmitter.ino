#include "EBYTE.h"
#include <Wire.h>
#include <ADS1X15.h>

#define PIN_RX 16   // Serial2 RX (connect this to the EBYTE Tx pin)
#define PIN_TX 17   // Serial2 TX pin (connect this to the EBYTE Rx pin)

#define PIN_M0 4    // D4 on the board (possibly pin 24)
#define PIN_M1 22   // D2 on the board (possibly called pin 22)
#define PIN_AX 21   // D15 on the board (possibly called pin 21)


#define MY_SDA_PIN 19
#define MY_SCL_PIN 18

struct DATA {
  unsigned long Count;
  char Message[20];
  int16_t ADC_Turbidez;
};


DATA MyData;

EBYTE Transceiver(&Serial2, PIN_M0, PIN_M1, PIN_AX);

ADS1115 ADS(0x48);

void setup() {


  Serial.begin(9600);

  Serial2.begin(9600);

  Serial.println("Starting Reader");

  // this init will set the pinModes for you
  Serial.println(Transceiver.init());
  Transceiver.PrintParameters();


  Wire.begin(18, 19);

  if (!ADS.begin()) {
    Serial.println("Failed to detect ADS1115 chip!");
    while (1);
  }
}

void loop() {

  String userInput = Serial.readStringUntil('\n');
  userInput.trim();

  MyData.Count++;
  snprintf(MyData.Message, sizeof(MyData.Message), "RibaLab %lu", MyData.Count);
  Transceiver.SendStruct(&MyData, sizeof(MyData));
  Serial.print("Sending: "); Serial.println(MyData.Count);

  MyData.ADC_Turbidez = ADS.readADC(0);

  delay(1000);
}
