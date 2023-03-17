#include <stdio.h>

/**
 * main - Entry point
 *
 * print the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}

	return (0);
}
