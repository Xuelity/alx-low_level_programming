#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print ten times numbers from 0-14
 *
 * return: no return
 */

void more_numbers(void)
{
	int x, c;

	for (x = 0; x < 10; x++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
			}
		}
		putchar('\n');
	}

}
