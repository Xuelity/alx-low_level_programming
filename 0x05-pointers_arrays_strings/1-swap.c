#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a:a is a
 * @b:b is a pointers
 *
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
