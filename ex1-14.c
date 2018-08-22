#include <stdio.h>

#define ARRAYLENGTH 5

/* print a horizontal histogram of the count of vowels */
	
main()
{
	int c, counter, max, row;
	int lengths[ARRAYLENGTH];
	
	row = max = counter = 0;
	
	for (int i = 0; i < ARRAYLENGTH; ++i)
		lengths[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == 'a') {
			++lengths[0];
		}
		if (c == 'e') {
			++lengths[1];
		}
		if (c == 'i') {
			++lengths[2];
		}
		if (c == 'o') {
			++lengths[3];
		}
		if (c == 'u') {
			++lengths[4];
		}
	}
	
	/* find maximum count */
	for (int i = 0; i < ARRAYLENGTH; ++i) {
		if (lengths[i] > max)
			max = lengths[i];
	}
	
	/* print labels across top */
	printf(" ");
	printf("a e i o u");
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
