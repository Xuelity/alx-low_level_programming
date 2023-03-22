#include "main.h"

/**
 * main - entry point
 * print alphabet function
 * 
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
}
