#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

float conversion(int f);

/* print Fahrenheit-Celsius table */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        float celsius = conversion(fahr);
        printf("%3d %6.1f\n", fahr, celsius);
    }
        
    return 0;
}

/* conversion: convert Fahrenheit to Celsius */
float conversion(int f)
{
    float cels = (5.0/9.0) * (f - 32);
    return cels;
}