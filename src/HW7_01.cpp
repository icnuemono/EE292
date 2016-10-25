/* HW7_1
   Jake Hill hillj7@unlv.nevad.edu
   Leslie T Rose rosel5@unlv.nevada.edu
   TEAM 17
   Fibonacci Numbers
  */

#include <Arduino.h>
#include "selector.h"

#if ASSIGNMENT == 1

int print_fib(int limit);

void setup() {
  setupSerial();

  int limit = 7;

  Serial.print("The first ");
  Serial.print(limit);
  Serial.print(" Fibonacci numbers: ");
  Serial.println(print_fib(limit));
}

void loop() {


}

int print_fib(int limit) {
  if (limit < 1) return 0;

  int last = 0, current = 1, temp;

  for (int i = 1; i < limit; i++) {
    Serial.print(current);
    Serial.print(' ');
    temp = current;
    current = last + current;
    last = temp;
  }
  return current;
}

#endif
