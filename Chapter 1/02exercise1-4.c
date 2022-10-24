#include <stdio.h>

/* Exercise 1-3, Exercise 1-4
	print Celsius-Fahrenheit table */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	printf("\t\tTemperature Conversion Table\n");

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}