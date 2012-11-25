#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
class Chassis: public Subsystem {
private:
	RobotDrive *drive;
public:
	Chassis();
	void InitDefaultCommand();
	void goStraight();
	void turnLeft();
	void tankDrive(double left, double right);
	void driveWithJoystick(Joystick *stick);
};
#endif
