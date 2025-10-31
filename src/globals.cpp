#include "main.h"
namespace global{
//pros::Motor motorName(portNumber, motorType);
//pros::sensorType sensorName (portNumber);
//pros::adi::Pneumatics pneumaticsName('portLetter', state(true/false));

//intaking and outtaking systems
pros::Motor bottom(3, pros::v5::MotorGearset::rpm_200); //half
pros::Motor middle(4, pros::v5::MotorGearset::rpm_200); //half
pros::Motor top(7, pros::v5::MotorGearset::rpm_200);

//other motors
pros::Motor outtaker(6, pros::v5::MotorGearset::rpm_200); //half
pros::Motor jammer(13, pros::v5::MotorGearset::rpm_200); //half

}