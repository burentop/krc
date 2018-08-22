#include <stdio.h>

float convertCF(float cel);

/* print Celsius-Fahrenheit table
	for celsius = 0, 10, ..., 200; float
	ing-point version */
	
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 200;	/* upper limit */
	step = 10;		/* step size */
	
	/* print heading */
	printf(" C     F\n");
	printf("----------\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = convertCF(celsius);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

/* convertCF: convert a Celsius temperature to Fahrenheit */
float convertCF(float cel)
{
    return (9.0 / 5.0) * cel + 32.0;
}
