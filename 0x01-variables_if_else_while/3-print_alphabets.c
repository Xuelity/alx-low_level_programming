#include <stdio.h>

/**
 * main -Entry point
 *
 * write a program that prints the alphabet in lower case
 * then print in upper case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	/*return zero*/
	return (0);
}
