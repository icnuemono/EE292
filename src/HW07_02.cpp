/* HW7_1
   Jake Hill hillj7@unlv.nevada.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   LED Control
  */

#include <arduino.h>
#include "selector.h"

//if assignment variable from selector.h is equal to 2, compile this program
#if ASSIGNMENT == 2

void waiting_message(); //declare function waiting_message
void buttonpressed(int pressed); //declare funtion buttonpressed

void setup() {

  setupSerial();


  pinMode (13,OUTPUT);

  waiting_message();

}


void loop() {



  if (Serial.available() > 0)
  {
   int pressed;

   pressed = Serial.read() - 48; //normalize ASCII value

  //call functon buttonpressed and pass the variable pressed.
  buttonpressed(pressed);

  }
  //Serial reads its input as characters.

}
//define the function buttonpressed
void buttonpressed(int pressed){

  //look at the value pressed if it is equal to the given value, run the function
  if (pressed == 1){
     digitalWrite(13,HIGH);
     Serial.println("LED is now ON");
     waiting_message();
   }

  if (pressed == 2){
    digitalWrite(13,LOW);
    Serial.println("LED is now OFF");
    waiting_message();
  }

}

//define function waiting_message, used to let user know its waiting
void waiting_message(){

  Serial.println("Press 1 to turn on LEDs, Press 2 to Turn off:");

}

#endif
