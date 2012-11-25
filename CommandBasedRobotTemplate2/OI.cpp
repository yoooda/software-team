#include "OI.h"

OI::OI() 
{
	joystick=new Joystick(JOYSTICKPORT);
}

Joystick *OI::get_joystick()
{
	return joystick;
}


