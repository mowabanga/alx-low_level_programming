#include "main.h"
#include <string.h>

/**
 * strpbrk - locates first occurence in string
 *
 * @s - string
 *
 * accept - string
 *
 * return - pointer to s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int b;
	int c;
	int d;

	c = 0;
	while (s[c] != '\0')
	{
		b = 0;
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
				b = 1;
		}

		d = 0;
		if (b == 1)
			return (s + c);
		c++;
	}
	return (NULL);
}
