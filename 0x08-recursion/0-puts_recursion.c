#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * _puts_recursion - parameter
 *
 * @*s - string
 *
 * return - always 0
 *
 */

void _puts_recursion(char *s)
{
	_puts_recursion(s);
	_putchar('\n');
	return;
}
