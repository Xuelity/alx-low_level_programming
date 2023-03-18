#include <stdio.h>

/**
 * main - Entry point
 *
 * print the alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');

	/*return value 0*/
	return (0);
}
