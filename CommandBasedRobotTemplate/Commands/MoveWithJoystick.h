#ifndef MOVEWITHJOYSTICK_H
#define MOVEWITHJOYSTICK_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class MoveWithJoystick: public CommandBase {
public:
	MoveWithJoystick();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
