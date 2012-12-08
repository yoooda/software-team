#include "MoveLeft.h"

MoveLeft::MoveLeft() {
	// Use requires() here to declare subsystem dependencies
	Requires(pole);
}

// Called just before this Command runs the first time
void MoveLeft::Initialize() {
	counter = 0;
	pole->SetSetpoint(0.5);
	pole->Enable();
}

// Called repeatedly when this Command is scheduled to run
void MoveLeft::Execute() {
	if(IsInRange())
		counter++;
	else 
		counter = 0;
	pole->UsePIDOutput();
	
}

// Make this return true when this Command no longer needs to run execute()
bool MoveLeft::IsFinished() {
	if(counter>=10)
		return true;
	return false;
}

// Called once after isFinished returns true
void MoveLeft::End() {
	pole->moveMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveLeft::Interrupted() {
}
bool MoveRight::IsInRange()
{
	double err = 0.1;
	double pos = pole->GetPosition();
	double sp = pole->GetSetpoint();
	if(pos<sp+err && pos>sp-err)
		return true;
	return false;
}
