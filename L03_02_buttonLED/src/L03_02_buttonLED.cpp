/* 
 * Project L03_02_button
 * Author: Phylicia Bediako
 * Date: June 12, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int GRAYBUTTON = D3;
const int GRNLED = D6;
bool buttonState1;

void setup() {
  pinMode(GRAYBUTTON, INPUT_PULLDOWN);
  pinMode(GRNLED, OUTPUT);
  Serial.begin(9600);
  waitFor(Serial.isConnected, 10000);
}


void loop() {
  buttonState1=digitalRead(GRAYBUTTON);
  if (buttonState1 == 1) {
    digitalWrite(GRNLED,HIGH);
  }
  else{
    digitalWrite(GRNLED,LOW);
  }
  
  Serial.printf("ButtonState = %i\n",buttonState1);
}