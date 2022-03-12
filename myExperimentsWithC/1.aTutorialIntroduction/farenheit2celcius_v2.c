#include <stdio.h>

/* print Farenheit-Celcius table
 * for fahr = 0, 20, 40, 60, ......, 300 */

main()
{
	float fahr, celcius;
	int upper, lower, step;

	lower = 0; //lower limit of temprature table
	upper = 300; //upper limit of temprature table
	step = 20; // step size

	printf("Farenheit to Celcius Table\n");

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}
