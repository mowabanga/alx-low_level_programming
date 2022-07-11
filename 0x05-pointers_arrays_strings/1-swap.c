#include "main.h"

/**
 * main - swapping value of two integers
 *
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	_putchar("a=%d b=%d\n", a, b);
	swap_int(&a, &b);
	_putchar("a=%d b=%d\n", a, b);
}
