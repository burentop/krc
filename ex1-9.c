#include <stdio.h>

/* copy input to output, 
	replacing multiple blanks with a single blank */
	
	#define NONBLANK 'a'
	
main()
{
	int c, last;
	
	last = NONBLANK;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);	
		if (c == ' ')
			if (last != ' ')
				putchar(c);
		last = c;
	}
}
