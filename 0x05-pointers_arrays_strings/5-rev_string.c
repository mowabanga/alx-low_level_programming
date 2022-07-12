#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * reverses a string
 *
 * return - always 0
 *
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) - 1;

	while(i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	}
}
