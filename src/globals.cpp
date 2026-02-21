#include "main.h"
namespace global{
//pros::Motor motorName(portNumber, motorType);
//pros::sensorType sensorName (portNumber);
//pros::adi::Pneumatics pneumaticsName('portLetter', state(true/false));

// --------------- MOTORS -----------------

pros::Motor bottom(1, pros::v5::MotorGearset::rpm_200); //full green
pros::Motor stick(2, pros::v5::MotorGearset::rpm_100); //full red

// ---------------- PNEUMATICS ---------------

pros::adi::Pneumatics leftUp('a', false); //do with right, inversed
pros::adi::Pneumatics rightUp('b', false); //do with left, inversed
pros::adi::Pneumatics descorer('c', false); 
pros::adi::Pneumatics match_loader('d', false);
pros::adi::Pneumatics hood('e', true); //inversed
}