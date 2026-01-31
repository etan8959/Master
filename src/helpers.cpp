#include "main.h"
//void functionName(){
// description of the function
//}

//auton helpers

void eject(){
  global::stick.move_velocity(100);
  pros::delay(700);
  global::stick.move_velocity(0);
}

void eject_middle(){
  global::stick.move_velocity(50);
  pros::delay(700);
  global::stick.move_velocity(0);
}

void reset(){
  global::stick.move_velocity(-100);
  pros::delay(700);
  global::stick.move_velocity(0);
}

void intake() {
  global::bottom.move_velocity(200);
}

void outtake() {
  global::bottom.move_velocity(-200);
}

void stop_all() {
  global::bottom.brake();
  global::stick.brake();
}

