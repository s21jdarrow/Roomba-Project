#pragma config(Sensor, S1,     button1,        sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	// creating  a verible
	int Bspeed = 10 ;
	int Cspeed = -10;

	while(Cspeed <= 90)
	{

		// using the varible
		motor[motorB] = Bspeed;
		motor[motorC] = Cspeed;
		wait1Msec(5000);
		// updating the varible
		Bspeed = Bspeed +10;
		Cspeed = Cspeed + 10;

	}
}
