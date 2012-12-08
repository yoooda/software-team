#ifndef STOPPOLE_H
#define STOPPOLE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class StopPole: public CommandBase {
public:
	StopPole();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
