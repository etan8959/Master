#include "main.h"
//void functionName(){
// description of the function
//}

//auton helpers
void brake() {
  global::bottom.brake();
  global::middle.brake();
  global::top.brake();
}

void upward() {
  global::jammer.move_velocity(-200);
  global::bottom.move_velocity(200);
  global::middle.move_velocity(-200);
  global::sorter.extend();
}

void basket() {
  global::jammer.move_velocity(200);
  global::middle.move_velocity(200);
  global::bottom.move_velocity(200);
  global::sorter.retract();
}

void grounded() {
  global::bottom.move_velocity(-200);
  global::middle.move_velocity(200);
}

void middle() {
  global::top.move_velocity(-200);
  global::bottom.move_velocity(-200);
}

void topp() {
  global::top.move_velocity(200);
  global::bottom.move_velocity(200);
}