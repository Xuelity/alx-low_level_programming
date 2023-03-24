#include "main.h"

/**
 * _isdigit - checks if a character is a number digit
 * @c:c is an ASCII character
 *
 * Return: 1 if a digit ,0 for not digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
