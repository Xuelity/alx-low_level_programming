#include <unistd.h>
#include "main.h"

/**
 * putchar write the character c to stdout
 *
 * return on success 1
 */

int putchar(char c)
{
	return (write(1, &c, 1));
}
