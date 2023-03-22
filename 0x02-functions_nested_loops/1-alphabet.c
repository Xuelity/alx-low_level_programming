#include "main.h"

/**
 * print_alphabet - main function
 *
 * print alphabet function
 *
 * Return: void
 */

void print_alphabet(void)
{
	/*this function prints the alphabet in lower case*/
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
