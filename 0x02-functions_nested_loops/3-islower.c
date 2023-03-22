#include "main.h"

/**
 * _islower - main function
 * checks if a character is lower
 *
 * @c: c is an ASCII character
 * 
 * Return: 1 if lower else 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
