#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class MoveRight: public CommandBase {
private:
	int counter;
	bool IsInRange();
public:
	MoveRight();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
};

#endif
