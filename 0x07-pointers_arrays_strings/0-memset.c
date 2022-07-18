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
	int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
