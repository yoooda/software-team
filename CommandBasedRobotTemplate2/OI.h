#ifndef OI_H
#define OI_H
#include "Robotmap.h"
#include "WPILib.h"

class OI {
private:
	Joystick * joystick;
public:
	OI();
	Joystick * get_joystick();
};

#endif
