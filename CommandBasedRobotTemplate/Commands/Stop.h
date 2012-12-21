#ifndef STOP_H
#define STOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class Stop: public CommandBase {
public:
	Stop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
