#include "main.h"

/**
 * main - entry point
 * print alphabet function
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
