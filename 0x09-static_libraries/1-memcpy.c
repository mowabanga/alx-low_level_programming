#include "main.h"
#include <string.h>
/**
 * @*_memcpy - copies from memory area
 *
 * @*src - pointer
 *
 * @n - unsigned integer
 *
 * @dest - pointer 
 *
 * return - dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return(dest);
}
