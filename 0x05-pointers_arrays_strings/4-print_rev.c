#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String to print.
 */
void print_rev(char *s)
{
	int n = 0;
	int o;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (o = n; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
