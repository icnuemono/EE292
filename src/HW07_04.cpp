/* HW7_1
   Jake Hill hillj7@unlv.nevada.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   Rando LED
  */


  #include <arduino.h>
  #include "selector.h"

  //if assignment number in selector.h is equal to 4, compile this program
  #if ASSIGNMENT == 4

  //declare functions that will be defined later as well as the long variable random_number
  void start_message();
  void buttonpressed(long random_number);
  long random_number;
  long rando_delay;

  void setup() {
    // call function setupSerial from selector.cpp
    setupSerial();

    //setpins 10-13 to OUTPUT
    pinMode (13,OUTPUT);
    pinMode (12,OUTPUT);
    pinMode (11,OUTPUT);
    pinMode (10,OUTPUT);

    //call function waiting_message, which will let the user know whats going on
    start_message();

    //use randomn analogue noise on unused pin to generate randomness
    randomSeed(analogRead(1));
  }
  void loop() {

    //generate a randomn number between 1 and 7 and return it as the long variable randomn_number
    random_number = random(1,7);
    rando_delay = random(500,1000);
    Serial.print("Current Delay is: ");
    Serial.println(rando_delay); //display randomn delay for debug purposes
    // pass the generate long variable random_number to the function buttonpressed
    buttonpressed(random_number);

    }
    //buttonpressed is defined
  void buttonpressed(long random_number) {

    //take the passed variable and compare to the followinf if statements
    //If true it will run statement turning on pin, displaing message, and delaying 10000 milliseconds

    if (random_number == 1) {
       digitalWrite(13,HIGH);
       Serial.println("The Yellow LED is now ON");
       delay(rando_delay);
     }

    if (random_number == 2) {
      digitalWrite(13,LOW);
      Serial.println("The Yellow LED is now OFF");
      delay(rando_delay);
    }

    if (random_number == 3) {
      digitalWrite(12,HIGH);
      Serial.println("The Red LED is now ON");
      delay(rando_delay);
    }

    if (random_number == 4) {
      digitalWrite(12,LOW);
      Serial.println("The Red LED is now OFF");
      delay(rando_delay);
    }

    if (random_number == 5) {
      digitalWrite(11,HIGH);
      Serial.println("The Green LED is now On");
      delay(rando_delay);
    }

    if (random_number == 6){
      digitalWrite(11,LOW);
      Serial.println("The Green LED is now OFF");
      delay(rando_delay);

    }

  }


  void start_message(){

    Serial.println("Randomn LED Generator Operational");

 }

  #endif
