#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers in hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x  < 10; x++)
		putchar(48 + x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	/*return value 0*/
	return (0);
}
