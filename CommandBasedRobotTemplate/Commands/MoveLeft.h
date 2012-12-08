#ifndef MOVELEFT_H
#define MOVELEFT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class MoveLeft: public CommandBase {
public:
	MoveLeft();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
