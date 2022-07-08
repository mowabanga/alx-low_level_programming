#include "main.h"
/**
 * main - check the code
 *
 * Return - Always 0
 *
 * Drawing a diagonal line
 *
 */

void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0;b < 1; b++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');

		}

	}

	else
	{
		_putchar ('\n');
	}

}
