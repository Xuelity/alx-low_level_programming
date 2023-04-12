#include "main.h"
#include <stdio.h>

/**
 * factorial - gives the factorial of a number
 * @n: is an integer
 * Return: the factorial
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else 
		return (-1);
}
