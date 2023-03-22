#include "main.h"

/**
 * _islower - main function
 * gets an integer value
 * checks the lower characters
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
