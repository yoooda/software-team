#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "Subsystems/Chassis.h"
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	static Chassis *chassis;
	static OI *oi;
};

#endif
