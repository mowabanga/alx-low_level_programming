#include "main.h"
#include <stdio.h>
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

		if (*s == '\0')

				{

							_putchar('\n');

									return;

										}

			_putchar(*s);

				_puts_recursion(s + 1);

}
