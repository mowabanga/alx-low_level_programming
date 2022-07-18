#include "main.h"

/**
 * @*_memset prints the buffer
 *
 * @*s - pointer to int
 *
 * @n - unisgned variable
 *
 * function fills memory/buffer with a constant byte
 *
 * return - pointer to memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	i = 0;

	while (i < n)
	{
		if (i % 10)
		{
			_putchar(" ");
		}
		if (!(i %10) && i)
		{
			_putchar("\n");
		}
	_putchar("0x%02x", s[i]);
	i++;
	}

	_putchar("\n");
}
