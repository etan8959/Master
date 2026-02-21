#include "main.h"
//void functionName(){
// description of the function
//}

//auton helpers

void eject(){
  global::hood.retract();
  global::leftUp.retract();
  global::rightUp.retract();
  pros::delay(1);
  global::stick.move_velocity(100);
  pros::delay(700);
  global::stick.move_velocity(-100);
  pros::delay(700);
  global::stick.brake();
  global::hood.extend();
}

void eject_middle(){
  global::leftUp.extend();
  global::rightUp.extend();
  global::hood.retract();
  global::stick.move_velocity(50);
  pros::delay(700);
  global::stick.move_velocity(-100);
  pros::delay(700);
  global::stick.brake();
  global::hood.extend();
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
  global::bottom.move_velocity(-100);
}

void stop_all() {
  global::bottom.brake();
  global::stick.brake();
}

