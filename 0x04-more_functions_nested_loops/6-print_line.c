#include "main.h"

/**
 * print_line - print a line
 * @c:c is an integer
 *
 */

void print_line(int c)
{
	int i;

	if (c > 0)
	{
		while (c > 0)
		{
			_putchar('_');
			c++;
		}
	}
	else
		_putchar('\n');
}
