#include "main.h"

/**
 * print_last_digit -print last digit of a number
 * @n : n is an integer
 *
 * Return: x
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x = x * -1;
	_putchar (48 + x);
	return (x);
}
