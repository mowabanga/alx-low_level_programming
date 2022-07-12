#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * printing elements of an array
 *
 * @n - elements
 * @a - pointer
 *
 * return - always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
