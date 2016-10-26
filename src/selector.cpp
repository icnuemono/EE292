#include "selector.h"

//establish external link for global serial setup
extern void setupSerial() {
  Serial.begin(9600);
  Serial.print("Assignment: #");
  Serial.println(ASSIGNMENT); //print assignmnt number
  Serial.print("Authors: ");
  Serial.println(AUTHORS);  //print team name
  
}
