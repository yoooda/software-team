/*
 * Positioner.cpp
 *
 *  Created on: 02/11/2012
 *      Author: yuval
 */

#include "Positioner.h"


Vector2 Positioner::get_vector()
{
}

void Positioner::update(float dT)
{
	
}

Positioner::Positioner(Gyro *nGyro, Accelerometer *nAc)
{
	acm=nAc;
	gyro=nGyro;
	vector=new Vector2(0,gyro->GetAngle());
	
}

Positioner::~Positioner() {
	// TODO Auto-generated destructor stub
}
