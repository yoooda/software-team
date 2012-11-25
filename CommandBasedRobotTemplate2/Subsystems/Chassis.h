#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author yuval
 */
class Chassis: public Subsystem {
private:
	RobotDrive * drive;
public:
	Chassis();
	void InitDefaultCommand();
	void drive_with_joystick(Joystick * joystick);
	void drive_forward();
};

#endif
