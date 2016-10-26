/* HW7_0
   Jake Hill hillj7@unlv.nevada.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   Test the serial port
  */

#include <Arduino.h>
#include "selector.h"

#if ASSIGNMENT == 0

void setup() {
  setupSerial();

  //print sting Hello World;
  Serial.println("Hello World");
}


void loop() {

}

#endif
