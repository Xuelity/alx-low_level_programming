#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -print all digits except 4 and 2
 *
 * Return:no return
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			putchar(c);
	}
	putchar('\n');
}
