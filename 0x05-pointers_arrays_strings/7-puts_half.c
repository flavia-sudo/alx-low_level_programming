#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: print
 */
void puts_half(char *str)
{
	int x, y;
	int z = 0;

	for (x = 0; str[x] != '\0'; x++)
		z++;
	{
		y = (z / 2);
	}
	if ((z % 2) == 1)
	{
		y = ((z + 1) / 2;
	}
	for (x = y; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
