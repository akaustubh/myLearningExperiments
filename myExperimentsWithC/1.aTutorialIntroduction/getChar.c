#include <stdio.h>

/* copy input to output; version 1 */

main()
{       
        int c;
        
 	while (c = getchar() != EOF) {
		printf("%d\n", c);
        }
 	printf("%d - at EOF\n", c);	
}
