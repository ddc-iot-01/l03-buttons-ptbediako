/* 
 * Project L03_01_button
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
Use digitalRead() to input the button state.
Print button state to the screen.
Remove the resistor. How does this affect the button state and the voltage?
Replace the pull-down resistor with a pull-up. How does the logic change?
  (a) Not pressed: 3.3V (b) Pressed: GND
Return to the ”pull-down” configuration but without the pull-down resistor.
  Implement: pinMode(pin,INPUT PULLDOWN);*/

//digitalWrite(pin,value); --where value is HIGH or LOW
//inputValue = digitalRead(pin); 

const int GRAYBUTTON = D3;
int inputValue;


void setup() {
  pinMode(GRAYBUTTON, INPUT_PULLDOWN);
  Serial.begin(9600);
  waitFor(Serial.isConnected, 10000);

}


void loop() {
  inputValue= digitalRead(GRAYBUTTON);
  Serial.printf("ButtonState = %i\n",inputValue);
  
}

//Pull down resistor: not pressed is 0(Low), pressed is 1 (High)//
//Removing the resistor changed the unpressed button state to HIGH (1) whether the button was pressed or not//
//Replacing with pull up resistor flipped the button state so pressed=0, not pressed =1)//
//INPUT_PULLDOWN works the same as having the separate pull down resistor, not pressed=0, pressed=1//