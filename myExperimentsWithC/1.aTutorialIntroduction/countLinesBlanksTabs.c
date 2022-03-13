#include <stdio.h>

/* count lines, tabs and blankspaces */
main()
{
	int c, nl, blankspace, tabs;

	nl, blankspace, tabs = 0;
	while ((c = getchar()) != EOF)
		if(c == '\n' || c == '\t' || c == ' ')
			++nl, ++blankspace, ++tabs;
	printf("%d\n, %d\n, %d\n", nl, blankspace, tabs);
}
