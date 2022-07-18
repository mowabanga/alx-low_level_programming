#include <string.h>
#include "main.h"

/**
 * strstr - finds first occurence of substrin
 *
 * needle - substring
 *
 * haystack - string
 *
 * return - NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *word1 = haystack;
		char *word2 = needle;

		while (*word2 == *haystack && *word2 != '\0' && *haystack != '\0')
		{
			haystack++;
			word2++;
		}
		if (*word2 == '\0')
			return (word1);
		haystack =word1 + 1;
	}
	return (NULL);
}
