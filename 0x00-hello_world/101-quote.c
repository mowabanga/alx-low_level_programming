#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Display text without using printf or puts()
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		while (*s);
			putchar(*s++);
}
