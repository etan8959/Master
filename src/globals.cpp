#include "main.h"
namespace global{
//pros::Motor motorName(portNumber, motorType);
//pros::sensorType sensorName (portNumber);
//pros::adi::Pneumatics pneumaticsName('portLetter', state(true/false));

//intaking and outtaking systems
pros::Motor bottom(-3, pros::v5::MotorGearset::rpm_200); //half
pros::Motor middle(4, pros::v5::MotorGearset::rpm_200); //half
pros::Motor top(6, pros::v5::MotorGearset::rpm_200); //half
pros::Motor jammer(5, pros::v5::MotorGearset::rpm_200); //half

//pneumatics
pros::adi::Pneumatics sorter('h', false); //starts retracted
pros::adi::Pneumatics descorer('f', false); //starts retracted
pros::adi::Pneumatics match_loader('g', false); //starts retracted

//theory color code
pros::Optical color(2);

}