#include "main.h"

/**
 * _isalpha -main function
 * @c: c is an ASCII character
 *
 * Return: 1 for  letters, 0 for the rest
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
