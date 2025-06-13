/* 
 * Project L03_EC_ModifytwoButton
 * Author: Phylicia Bediako
 * Date: June 12, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

 /* Description:
2 LEDs, 2 buttons
Green LED @ Pin D6, Yellow LED @ Pin D5
Button 1 @ D3, Button 2 @ D2
Green LED lights up if both buttons are pressed
Yellow LED lights up if either button is pressed
No print button states to the screen*/

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

/*The Green LED lights up if both buttons are pressed
The Yellow LED lights up if either button is pressed*/
void loop() {
  buttonState1=digitalRead(GRAYBUTTON);
  buttonState2=digitalRead(REDBUTTON);

  if((buttonState1) && (buttonState2)){
    digitalWrite(GRNLED,HIGH);
  }
  else{
    digitalWrite(GRNLED,LOW);
  }

  if(buttonState1 || buttonState2){
    digitalWrite(YELOLED,HIGH);
  }
  else{
    digitalWrite(YELOLED,LOW);
  }

  //Serial.printf("ButtonState1 = %i, ButtonState2 = %i\n",buttonState1,buttonState2);
}
