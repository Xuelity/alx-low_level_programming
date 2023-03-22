#include "main.h"

/**
 * print_alphabet_x10 - main function
 * print the alphabet ten times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
