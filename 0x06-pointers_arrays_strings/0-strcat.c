#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: dest destination character
 * @src: src source character
 * Return: pointer to new dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';

	return (dest);
}
