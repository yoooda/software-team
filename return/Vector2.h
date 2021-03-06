/*
 * Vector2.h
 *
 *  Created on: 02/11/2012
 *      Author: yuval
 */

#ifndef VECTOR2_H_
#define VECTOR2_H_

class Vector2 {
private:
	float x,y, distance, angle;

public:
	Vector2(double nX=0,float nY=0);
	Vector2(double nDistance,float nAngle);
	//get
	double get_angle();
	double get_distance();
	double get_x();
	double get_y();
	//set
	void set_angle(float nAngle);
	void set_distance(float nDistance);
	void set_x(float nX);
	void set_y(float nY);
		
	virtual ~Vector2();
};

#endif /* VECTOR2_H_ */
