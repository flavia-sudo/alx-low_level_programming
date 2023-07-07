#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @s: stirng to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
