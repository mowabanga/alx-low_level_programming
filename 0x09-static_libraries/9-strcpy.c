#include "main.h"
#include <string.h>

/**
 * strcpy - copies the string pointed to
 * @dest - points to buffer
 * @src - points the string
 * return - pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
