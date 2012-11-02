/*
 * MCLASS.cpp
 *
 *  Created on: 12/10/2012
 *      Author: yuval
 */

#include "MCLASS.h"

MCLASS::MCLASS() {
	// TODO Auto-generated constructor stub

}

MCLASS::~MCLASS() {
	// TODO Auto-generated destructor stub
}
void MCLASS::PIDWrite(float output)
{
	m_output = output;
}
float MCLASS::GetOutput()
{
	return m_output;

}

