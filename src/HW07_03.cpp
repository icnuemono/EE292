/* HW7_1
   Jake Hill hillj7@unlv.nevad.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   LED Control
  */


  #include <arduino.h>
  #include "selector.h"

  #if ASSIGNMENT == 3

  void waiting_message();
  void buttonpressed(int pressed);

  void setup() {

    setupSerial();


    pinMode (13,OUTPUT);
    pinMode (12,OUTPUT);
    pinMode (11,OUTPUT);
    pinMode (10,OUTPUT);

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

  void buttonpressed(int pressed) {

    if (pressed == 1) {
       digitalWrite(13,HIGH);
       Serial.println("The Yellow LED is now ON");

       waiting_message();
     }

    if (pressed == 2) {
      digitalWrite(13,LOW);
      Serial.println("The Yellow LED is now OFF");

      waiting_message();
    }

    if (pressed == 3) {
      digitalWrite(12,HIGH);
      Serial.println("The Red LED is now ON");

      waiting_message();
    }

    if (pressed == 4) {
      digitalWrite(12,LOW);
      Serial.println("The Red LED is now OFF");

      waiting_message();
    }

    if (pressed == 5) {
      digitalWrite(11,HIGH);
      Serial.println("The Green LED is now On");

      waiting_message();
    }

    if (pressed == 6){
      digitalWrite(11,LOW);
      Serial.println("The Green LED is now OFF");

      waiting_message();
    }

  }

  void waiting_message(){

    Serial.println("Press 1 to turn on Yellow LED" );
    Serial.println("Press 2 to turn off Yellow LED");
    Serial.println("Press 3 to turn on Red LED");
    Serial.println("Press 4 to turn off Red LED");
    Serial.println("Press 5 to turn on Green LED");
    Serial.println("Press 6 to turn off Green LED");


  }
#endif
