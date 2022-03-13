#include <stdio.h>

/* copy input to output
 *replace each string og one or more blanks with single blank */

main()
{
	int c;

	while((c = getchar()) != EOF && c == " ")
		putchar(c);
}
