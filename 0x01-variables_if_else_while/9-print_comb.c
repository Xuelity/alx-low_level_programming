#include <stdio.h>

/**
 * main -Entry point
 * print all possible combinations of single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	/*return 0*/
	return (0);
}
