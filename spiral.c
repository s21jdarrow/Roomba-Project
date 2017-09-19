
task main()
{
	int speed= 10;
	while(speed <= 110)
	{
		motor[motorB] = speed + 10;
		motor[motorC] = speed - 10;
		wait1Msec(3000);
		speed= speed +10;
	}



}
