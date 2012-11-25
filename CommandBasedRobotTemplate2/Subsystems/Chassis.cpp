#include "Chassis.h"
#include "../Robotmap.h"

Chassis::Chassis() : Subsystem("Chassis") {
	drive=new RobotDrive(LEFTMOTOR,RIGHTMOTOR);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveWithJoystick());
}

void Chassis::drive_forward()
{
	drive->RobotDrive(1,1);
}

void Chassis::drive_with_joystick(Joystick *joystick)
{
	drive->ArcadeDrive(stick,false);
}




// Put methods for controlling this subsystem
// here. Call these from Commands.
