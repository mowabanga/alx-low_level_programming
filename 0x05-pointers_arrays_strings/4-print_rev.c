#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * return - data
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i --)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
