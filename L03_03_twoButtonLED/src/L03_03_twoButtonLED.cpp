/* 
 * Project L03_03_twoButtonLED
 * Author: Phylicia Bediako
 * Date: June 12, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int GRAYBUTTON=D3;
const int REDBUTTON=D2;
const int GRNLED=D6;
const int YELOLED=D5;
bool buttonState1, buttonState2;


void setup() {
  pinMode(GRAYBUTTON, INPUT_PULLDOWN);
  pinMode(REDBUTTON, INPUT_PULLDOWN);
  pinMode(GRNLED, OUTPUT);
  pinMode(YELOLED,OUTPUT);
  Serial.begin(9600);
  waitFor(Serial.isConnected, 10000);
}


void loop() {
  buttonState1=digitalRead(GRAYBUTTON);
  if(buttonState1 == 1){
    digitalWrite(GRNLED,HIGH);
  }
}
