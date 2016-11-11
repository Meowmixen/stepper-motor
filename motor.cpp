#include <wiringPi.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int mot1 = 8;
    int mot2 = 9;
	int mot3 = 7;
	int mot4 = 0;

    wiringPiSetup();
	// Set Motor Pins to Outputs
	pinMode(mot1, OUTPUT);
	pinMode(mot2, OUTPUT);
	pinMode(mot3, OUTPUT);
	pinMode(mot4, OUTPUT);
	pinMode(Dir1, OUTPUT);
	pinMode(Dir2, OUTPUT);
	pinMode(Dir3, OUTPUT);
	pinMode(Dir4, OUTPUT);
		//Initial Output is LOW so Motor has no Step
    digitalWrite(mot1, LOW);
	digitalWrite(mot2, LOW);
	digitalWrite(mot1, LOW);
	digitalWrite(mot1, LOW);
	digitalWrite(dir1, HIGH)
	digitalWrite(dir2, HIGH)
	digitalWrite(dir3, HIGH)
	digitalWrite(dir4, HIGH)
	int custDelay = 10; // Delay in ms between each step pulse change.
	
	//FORWARD MOTION ON ROBOT
    for(int i = 1; i < 200; i++) // 200 is one Rotation of the stepper.
    {

		digitalWrite(mot1, HIGH);
		digitalWrite(mot2, HIGH);
		digitalWrite(mot3, HIGH);
		digitalWrite(mot4, HIGH);
			delay(custDelay);
		digitalWrite(mot1, LOW);
		digitalWrite(mot2, LOW);
		digitalWrite(mot3, LOW);
		digitalWrite(mot4, LOW);
			delay(custDelay);
		
    }
	delay(200)
	//BACKWARD MOTION
	for (int i = 1; i < 200; i++)
	{
		digitalWrite(mot1, HIGH);
		digitalWrite(mot2, HIGH);
		digitalWrite(mot3, HIGH);
		digitalWrite(mot4, HIGH);
		digitalWrite(dir1, LOW)
		digitalWrite(dir2, LOW)
		digitalWrite(dir3, LOW)
		digitalWrite(dir4, LOW)
			delay(custDelay);
		digitalWrite(mot1, LOW);
		digitalWrite(mot2, LOW);
		digitalWrite(mot3, LOW);
		digitalWrite(mot4, LOW);
			delay(custDelay);
	}

		delay(500)
		//LEFT TRANSLATION
	for (int i = 1; i < 200; i++)
	{
		digitalWrite(dir1, LOW);
		digitalWrite(dir2, HIGH);
		digitalWrite(dir3, HIGH);
		digitalWrite(dir4, LOW);
		digitalWrite(mot1, HIGH);
		digitalWrite(mot2, HIGH);
		digitalWrite(mot3, HIGH);
		digitalWrite(mot4, HIGH);
		delay(custDelay);
		digitalWrite(mot1, LOW);
		digitalWrite(mot2, LOW);
		digitalWrite(mot3, LOW);
		digitalWrite(mot4, LOW);
			delay(custDelay);
	}
		delay(500)
		//RIGHT TRANSLATION
	for (int i = 1; i < 200; i++)
	{
		digitalWrite(dir1, HIGH);
		digitalWrite(dir2, LOW);
		digitalWrite(dir3, LOW);
		digitalWrite(dir4, HIGH);
		digitalWrite(mot1, HIGH);
		digitalWrite(mot2, HIGH);
		digitalWrite(mot3, HIGH);
		digitalWrite(mot4, HIGH);
		delay(custDelay);
		digitalWrite(mot1, LOW);
		digitalWrite(mot2, LOW);
		digitalWrite(mot3, LOW);
		digitalWrite(mot4, LOW);
		delay(custDelay);
	}
    delay(1000);


  
    return 0;
}
