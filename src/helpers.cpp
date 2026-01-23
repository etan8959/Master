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
    global::bottom.move_velocity(200);
    global::middle.move_velocity(200);
    global::sorter.retract();
}

void basket() {
    global::top.move_velocity(200);
    global::middle.move_velocity(200);
    global::bottom.move_velocity(200);
    global::sorter.extend();
}

void grounded() {
    global::bottom.move_velocity(-200);
    global::middle.move_velocity(200);
}

void middle() {
    global::top.move_velocity(-100);
    global::bottom.move_velocity(100);
}

void topp() {
  global::top.move_velocity(200);
  global::bottom.move_velocity(200);
}