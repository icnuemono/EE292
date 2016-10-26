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

void Toggle_LED(int pressed);

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
  if (Serial.available() > 0){
    int pressed;
    pressed = Serial.read() - 48;

    Toggle_LED(pressed);

  }
}

void Toggle_LED(int pressed) {

  if (pressed == 1){
    digitalWrite(13,HIGH);
  }
}
/*
void setup() {
  //call setupSerial variable, defined in selector.cpp
  setupSerial();

  //print sting Hello World;
  Serial.println("Hello World");
}


void loop() {

}
*/
#endif
