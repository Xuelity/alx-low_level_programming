#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[lenght + x] = src[x];
	dest[lenght + x] = '\0';

	return (dest);
}
