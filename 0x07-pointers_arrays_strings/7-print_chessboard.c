#include "main.h"

/**
 * main - check the code 
 *
 * printing a chessboard
 *
 * return - always 0
 *
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			if (y == 7)
				_putchar(10);
			y++
		}
		x++;
	}
}
