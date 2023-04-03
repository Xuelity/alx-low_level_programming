#include <stdio.h>

/**
 * _memset - fill memory with a const byte
 * @s: memory area
 * @b: const byte
 * @n: bytes filled
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	
	return (s);
}
