#include <stdio.h>

/* print farenheit-celcius table
 for fahrenheit = 0, 20, 40, 60, ....., 300 */

main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower = 0; // lower limit of temprature table
	upper = 300; // upper limit of temprature table
	step = 20; // step size

	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}

}
