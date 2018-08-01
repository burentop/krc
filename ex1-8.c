#include <stdio.h>

/* count occurences of blanks, tabs, and new lines */

main()
{
	int c, nl, bl, ta;
	
	nl = 0;
	bl = 0;
	ta = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c == '\t')
			++ta;
		if (c == ' ')
			++ bl;
	printf("new lines: %d\n", nl);
	printf("tabs: %d\n", ta);
	printf("blanks: %d\n", bl);
}
