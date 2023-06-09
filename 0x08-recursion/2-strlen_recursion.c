#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the lenght of an integer
 * @s: is a string
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
