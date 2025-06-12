/* 
 * Project L03_00_SerialMonitor --Learn to print to the screen
 * Author: Phylicia Bediako
 * Date: June 12, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

int count;
const int PRINTDELAY= 1000;


void setup() {
  Serial.begin(9600);
  waitFor(Serial.isConnected, 10000); //wait for Serial Monitor//
  delay(2000);
  //Serial.printf("Ready to Go");//
  Serial.printf("Hello World!\n");//say "Hello World" and add a new line
  //use a FOR loop to increment the "count" variable
  for (count=1; count<=12; count++) {
    Serial.printf("%i,",count); //format the variable "count" as an i data type, add commas, and print the variable
  }
  Serial.printf("13\n"); //print the number 13 at the end of the list and add a new line
  Serial.printf("All Done\n"); //say "All Done" on a new line
  //dropped delay line, no delays needed//
}


void loop() {
  
}
