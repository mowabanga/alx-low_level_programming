#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * return - to c
 *
 * @s - string
 *
 * @c - character
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
