#include "main.h"
#include <stdio.h>

/**
 * prime -checks if a number is prime with iterations
 * @x: is an unsigned integer
 * @y: is iterations
 * Return: 1 if prime
 */

int prime(unsigned int x, int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return(0);
	}
	return (0 + prime(x, (y + 1)));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: is an integer
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (prime(n, 2));
}
