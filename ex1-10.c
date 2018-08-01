#include <stdio.h>

/* copy input to output, 
	replacing tabs with '\t', backspaces with '\b'
	and backslash with '\\' */
	
main()
{
	int c, output;
	
	while ((c = getchar()) != EOF) {
		output = c;
		if (c == '\t') {
			output = 't';
			putchar('\\');	
		}
		if (c == '\b') {
			output = 'b';
			putchar('\\');
		}
		if (c == '\\') {
			output = '\\';
			putchar('\\');
		}
		putchar(output);
	}
}
