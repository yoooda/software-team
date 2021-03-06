/*
 * Vector2.cpp
 *
 *  Created on: 02/11/2012
 *      Author: yuval
 */

#include "Vector2.h"

Vector2::Vector2(float nX, float nY) {

	// TODO Auto-generated constructor stub
	x = nX;
	y = nY;

}

Vector2::Vector2(double nDistance, double nAngle) {
	distance = nDistance;
	angle = nAngle;
}
//get
Vector2::get_angle() {
	if (angle == null)
		angle = (tanf(y / x))%360;
	if (angle <0)
		angle+=360;
	return angle;
}

Vector2::get_distance() {
	if (distance == null)
		distance = powf(powf(x, 2) + powf(y, 2), 0.5);
	return distance;
}

Vector2::get_x() {
	if (x == null)
		x = distance * cosf(angle);
	return x;
}
Vector2::get_y() {
	if (y == null)
		y = distance * cosf(angle);
	return y;
}
//set
Vector2::set_x(float nX) {
	x = nX;
	angle = null;
	distance = null;
}
Vector2::set_y(float nY) {
	Y = nY;
	angle = null;
	distance = null;
}
Vector2::set_angle(nAngle){
	angle=nAngle;
	x=null;
	y=null;
}
Vector2::set_distance(float nDistance){
	distance=nDistance;
	x=null;
	y=null;
}
Vector2::~Vector2() {
	// TODO Auto-generated destructor stub
}
