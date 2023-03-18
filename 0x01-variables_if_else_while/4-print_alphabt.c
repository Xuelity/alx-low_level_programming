#include <stdio.h>

/**
 * main -Entry point
 *
 * print all alphabet letters in lower case except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	/*return 0*/
	return (0);
}
