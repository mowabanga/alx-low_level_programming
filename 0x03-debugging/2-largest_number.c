#include "main.h"

/**header - beginning of code
 * prints largest of three numbers 
 * int a, b, c
 * return successfully (0)
 */
int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && b>c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else 
	{
		largest = c;
	}

	return (largest);
}
