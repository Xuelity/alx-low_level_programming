#include "main.h"
#include <stdio.h>

/**
 * print_numbers -print digits from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
