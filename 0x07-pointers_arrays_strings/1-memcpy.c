#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: distinationmemory
 * @src: source memory
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);

	return (dest);
}
