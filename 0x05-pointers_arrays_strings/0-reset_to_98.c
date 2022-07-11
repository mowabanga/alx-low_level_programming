#include "main.h"

/**
 * main - take pointer to int and
 * updates value it points to 98
 *
 * return - always 0
 */

void reset_to_98(int *n)
{
	*n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);

	_putchar("n=%d\n", n);

	return (0);
}
