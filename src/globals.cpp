#include "main.h"
namespace global{
//pros::Motor motorName(portNumber, motorType);
//pros::sensorType sensorName (portNumber);
//pros::adi::Pneumatics pneumaticsName('portLetter', state(true/false));

//intaking and outtaking systems
pros::Motor bottom(1, pros::v5::MotorGearset::rpm_200); //full green
pros::Motor stick(2, pros::v5::MotorGearset::rpm_100); //full red

pros::adi::Pneumatics leftUp('a', true); //do with right
pros::adi::Pneumatics rightUp('b', true); //do with left
pros::adi::Pneumatics descorer('c', true); 
pros::adi::Pneumatics match_loader('d', false);
}