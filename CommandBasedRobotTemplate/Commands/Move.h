#ifndef MOVE_H
#define MOVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author yuval
 */
class Move: public CommandBase {
private:
	float speed;
	bool rightLastPressed;
public:
	Move();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
