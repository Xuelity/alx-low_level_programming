#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
