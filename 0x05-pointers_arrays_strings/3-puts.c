#include "main.h"
#include <string.h>

/**
 * main - checks code
 *
 * puts - prints a string
 *
 * return - always 0
 *
 */

void _puts(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
