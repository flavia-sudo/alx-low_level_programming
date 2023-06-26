#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String to print.
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
