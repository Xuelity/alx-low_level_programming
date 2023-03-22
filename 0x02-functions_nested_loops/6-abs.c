#include "main.h"

/**
 * _abs - function that return the absolute value of a given number
 * @n: n is an integer
 * Return: 0 always
 */

int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = n * -1;
	}
	else
		x = n;
	return (x);
}
