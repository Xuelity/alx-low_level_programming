#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculate x raised to the power y
 * @x: is the number
 * @y: is the superscript
 * Return: Integer
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
