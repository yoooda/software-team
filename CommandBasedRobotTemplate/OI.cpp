#include "OI.h"
#include "Robotmap.h"
#include "Commands/Move.h"
OI::OI() {
	stick = new Joystick(JOYSTICKPORT);
	trigger = new JoystickButton(stick,TRIGGERPORT);
	trigger->WhileHeld(new Move());
}
