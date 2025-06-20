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

/*
First button (GRAY) to D3, power Green LED in Pin D6
Add a second button (RED) to D2, power Yellow LED in Pin D5.
Have each button control one LED.
Also, print button states to the screen.*/

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
  else{
    digitalWrite(GRNLED,LOW);
  }

  buttonState2=digitalRead(REDBUTTON);
  if(buttonState2 == 1){
    digitalWrite(YELOLED,HIGH);
  }
  else{
    digitalWrite(YELOLED,LOW);
  }

  Serial.printf("ButtonState1 = %i, ButtonState2 = %i\n",buttonState1,buttonState2);
}
