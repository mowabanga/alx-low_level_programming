#include "main.h"

/**
 * factorial - parameter for calculating factorial of int
 *
 * n - integer
 *
 * return - n
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
