/* This was made so that we could create all four programs in one single project
folder.  You select what program (hoemwork assignment) you want compiled below.
We use PlatformIO as our IDE, this allows us to choose one to be compiled and
uploaded to the UNO for testing.
*/

//guard
#ifndef _SELECTOR
#define _SELECTOR

//define assignment number your working on, who are the team members
#define ASSIGNMENT 4
#define AUTHORS "Team 17: Trevor Rose and Jake Hill"


#include <arduino.h>

void setupSerial();

#endif
