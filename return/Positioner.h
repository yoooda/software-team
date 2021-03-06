/*
 * Positioner.h
 *
 *  Created on: 02/11/2012
 *      Author: yuval
 */

#ifndef POSITIONER_H_
#define POSITIONER_H_
#include "WPILib.h"

class Positioner {
	
private:
	Vector2 vector;
	float speed;
	Gyro * gyro;
	Accelerometer * ac;
public: 
	Positioner(Gyro * nGyro,Accelerometer * nAc );
	void update(float dT);
	Vector2 get_vector();
	virtual ~Positioner();
};

#endif /* POSITIONER_H_ */
