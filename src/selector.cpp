#include "selector.h"

extern void setupSerial() {
  Serial.begin(9600);
  Serial.print("Assignment: #");
  Serial.println(ASSIGNMENT);
  Serial.print("Authors: ");
  Serial.println(AUTHORS);
}
