#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick
	DigitalInput ms1, ms2;
	MCLASS output;
	PIDController pid;
	bool isRotated,stillRotating;


public:
	RobotDemo(void):
		myRobot(1, 2),	// these must be initialized in the same order
		stick(1),		// as they are declared above.
		ms1(1),
		ms2(2),
		output(),
		pid(0.035, 0.0, 0.0, &g, &pid)
	{
		stillRotating=false;
		isRotated = false;
		pid.SetOutputRange(-1, 1);
		pid.SetSetpoint(180);
		myRobot.SetExpiration(0.1);
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		myRobot.SetSafetyEnabled(false);
		int counter = 4;
		bool clicked=false;
		int speed = 0.3;
		while(counter>0)
		{
			if(ms1.Get() == 0 && ms2.Get() == 0)// 0-not clicked
				clicked=false;
			else if (clicked==false)
			{
				clicked=true;
				speed*=-1;
				counter--;
			}
			myRobot.Drive(speed,0);
			wait(0.01);
		}

	}

	/**
	 * Runs the motors with arcade steering. 
	 */
	void OperatorControl(void)
	{
		myRobot.SetSafetyEnabled(true);
		float x,y;

		while (IsOperatorControl())
		{
			x = stick.GetX();
			y = stick.GetY();
			if(stick.GetRawButton(1))
			{
				if(!stillRotating)
				{					
					isRotated = !isRotated;
					stillRotating = true;
					pid.Enable();
				}
				myRobot.Drive(0, output.GetOutput());
			}
			else
			{
				stillRotating = false;
				if (isRotated)
				{
					x *= -1;
					y *= -1;
				}
				myRobot.Drive(x, y);
			}
			Wait(0.005);				// wait for a motor update time
		}
	}
};

START_ROBOT_CLASS(RobotDemo);

