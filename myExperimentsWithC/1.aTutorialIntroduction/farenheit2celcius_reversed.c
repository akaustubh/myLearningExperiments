#include <stdio.h>

/* print farenheit to celcius table
 * for farenheit = 0, 20, 40, 60, ....., 300 */

main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
