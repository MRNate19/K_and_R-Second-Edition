#include <stdio.h>

#define LOWER 0   /* lower limit of temperature table */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

/* Exercise 1-5
	print Fahrenheit-Celsius table in reverse order */

main()
{
	int fahr; 

	printf("\t\tTemperature Conversion Table\n");

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}