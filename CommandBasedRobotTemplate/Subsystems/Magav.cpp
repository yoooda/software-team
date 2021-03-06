#include "Magav.h"
#include "../Robotmap.h"
#include "../Commands/Stop.h"

Magav::Magav() : Subsystem("Magav") {
	motor = new Gyro(MOTORPORT);
	ms1= new DigitalInput(MS1PORT);
	ms2= new DigitalInput(MS2PORT);
	
}
    
void Magav::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new Stop());
}

void Magav::moveMotor(float speed)
{
	motor->Set(speed);
}



bool Magav::ms1Pressed()
{
	return (bool)ms1->Get();
}


bool Magav::ms2Pressed()
{
	return (bool)ms2->Get();
}
