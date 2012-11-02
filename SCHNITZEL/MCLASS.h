/*
 * MCLASS.h
 *
 *  Created on: 12/10/2012
 *      Author: yuval
 */

#ifndef MCLASS_H_
#define MCLASS_H_
#include "WPILib.h"

class MCLASS : public PIDOutput {
	float m_output;
public:
	MCLASS();
	virtual ~MCLASS();
	void PIDWrite(float output);
	float GetOutput();
	
	
	
};

#endif /* MCLASS_H_ */
