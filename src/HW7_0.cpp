/* HW7_0
   Jake Hill hillj7@unlv.nevada.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   Test the serial port
  */

#include <Arduino.h>
#include "selector.h"

//if assignment variable is equal to 0, complile this code  
#if ASSIGNMENT == 0

void setup() {
  //call setupSerial variable, defined in selector.cpp
  setupSerial();

  //print sting Hello World;
  Serial.println("Hello World");
}


void loop() {

}

#endif
