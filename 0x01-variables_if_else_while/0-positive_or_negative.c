#include <stdio.h>
#include <time.h>
/**More headers can be included here
 * Return will be zero 
 * Program assigns a variable each time it is executed
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	for (n = 0)
		{
			printf("%i is zero\n", n);
		}
	if (n > 0)
		{
			printf("%i is positive\n", n);

		}
	else (n < 0)
		{
			printf("%i is negative\n", n);
		}
	return (0);
}
