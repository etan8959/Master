#include "main.h"
//void functionName(){
// description of the function
//}

// void theory_auton() {
//   chassis.pid_drive_set(30_in, 127);
//   chassis.pid_wait();
//   basket();
//   chassis.pid_turn_set(60_deg, 127);
//   chassis.pid_wait();
//   chassis.pid_swing_set(ez::RIGHT_SWING, 20_deg, -127);
//   chassis.pid_wait();
//   chassis.pid_turn_set(90_deg, 127);
//   chassis.pid_wait();
//   topp();
//   upward();
//   chassis.pid_drive_set(-43_in, 127);
//   chassis.pid_wait();
//   basket();
//   chassis.pid_drive_set(43_in, 127);
//   chassis.pid_wait();
//   upward();
// }

//auton helpers
void brake() {
  global::bottom.brake();
  global::middle.brake();
  global::top.brake();
}

void upward() {
  global::bottom.move_velocity(-200);
  global::middle.move_velocity(-200);
}

void basket() {
  global::middle.move_velocity(200);
  global::bottom.move_velocity(-200);
}

void uptaker() {
  global::outtaker.move_absolute(-100, 100);
}

void grounded() {
  global::bottom.move_velocity(200);
  global::middle.move_velocity(200);
}

void middle() {
  global::top.move_velocity(-200);
}

void topp() {
  global::top.move_velocity(200);
}