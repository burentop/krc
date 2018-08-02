#include <stdio.h>

#define NONBLANK 'a'
#define ARRAYLENGTH 11

/* print a horizontal histogram of the number of words
	of a certain length */
	
main()
{
	int c, counter, last;
	int lengths[ARRAYLENGTH];
	
	counter = 0;
	last = NONBLANK;
	
	for (int i = 0; i < ARRAYLENGTH; ++i)
		lengths[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == '.' || 				c == '?') {
			if (counter > 0 && last != ' ' && counter <= ARRAYLENGTH)
				++lengths[counter - 1];
			counter = 0;
		} else {
			++counter;
		}
		last = c;
	}
	
	for (int i = 0; i < ARRAYLENGTH; ++i) {
		printf("%d - ", i + 1);
		for (int j = 1; j <= lengths[i]; ++j)
			printf("*");
		printf("\n");
	}
}
