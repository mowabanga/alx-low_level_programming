#include "main.h"
#include <string.h>

/**
 * main - start of the code
 *
 * printing every other character
 * starting with the first character
 *
 * return - always 0
 *
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i+= 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
