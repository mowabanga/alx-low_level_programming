#include "main.h"

/**
 * _pow_recursion - calculates the value of a number that is raised
 *
 * @x - number
 *
 * @y - number
 *
 * return - x
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (x == 0)
	{
		return (0);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
