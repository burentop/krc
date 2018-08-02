#include <stdio.h>

#define NONBLANK 'a'
#define ARRAYLENGTH 11

/* print a horizontal histogram of the number of words
	of a certain length */
	
main()
{
	int c, counter, last, max, row;
	int lengths[ARRAYLENGTH];
	
	row = max = counter = 0;
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
	
	/* find maximum count */
	for (int i = 0; i < ARRAYLENGTH; ++i) {
		if (lengths[i] > max)
			max = lengths[i];
	}
	
	/* print labels across top */
	printf(" ");
	for (int i = 0; i < ARRAYLENGTH; ++i)
		printf("%d ", i + 1);
	printf("\n");
	
	/* print vertical bars */
	for (int k = 0; k < max; ++k) {
		for (int i = 0; i < ARRAYLENGTH; ++i) {
			if (lengths[i] > row) {
				printf(" *");
			} else {
				printf("  ");
			}
		}
		++row;
		printf("\n");
	}
}
