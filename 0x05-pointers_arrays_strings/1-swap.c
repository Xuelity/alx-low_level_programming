#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a:a and @b:b are pointers
 *
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
