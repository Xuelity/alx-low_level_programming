#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string in reverse
 * @s: is a character
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
