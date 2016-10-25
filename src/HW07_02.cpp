/* HW7_1
   Jake Hill hillj7@unlv.nevad.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   LED Control
  */

#include <arduino.h>
#include "selector.h"

#if ASSIGNMENT == 2

void waiting_message();
void buttonpressed(int pressed);

void setup() {

  setupSerial();


  pinMode (13,OUTPUT);

  waiting_message();

}


void loop() {



  if (Serial.available() > 0)
  {
   int pressed;

   pressed = Serial.read() - 48;
   // now do something with it

  buttonpressed(pressed);

  }
  //Serial reads its input as characters,

}

void buttonpressed(int pressed){

  if (pressed == 1){
     digitalWrite(13,HIGH);
     Serial.println("LED is now ON");

     waiting_message();
   }

  if (pressed ==2){
    digitalWrite(13,LOW);
    Serial.println("LED is now OFF");

    waiting_message();
  }

}

void waiting_message(){

  Serial.println("Press 1 to turn on LEDs, Press 2 to Turn off:");

}
#endif
