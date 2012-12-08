#ifndef OI_H
#define OI_H

#include "WPILib.h"
#define JOYSTICKPORT 1
class OI {
private:
	Joystick * stick;
	JoystickButton * trigger;
	JoystickButton * btn2;
	JoystickButton * btn3;
public:
	Joystick* getStick();
	OI();
};

#endif
