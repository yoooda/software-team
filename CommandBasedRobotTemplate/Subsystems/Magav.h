#ifndef MAGAV_H
#define MAGAV_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author yuval
 */
class Magav: public Subsystem {
private:
	DigitalInput* ms1;
	DigitalInput * ms2;
	SpeedController* motor;
public:
	Magav();
	void InitDefaultCommand();
	bool ms1Pressed();
	bool ms2Pressed();
	void moveMotor(float speed);
};

#endif
