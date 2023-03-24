#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: c ia an ASCII character
 *
 * Return: 1 for uppercase ,0 for lowercase and others
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
