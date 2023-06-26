#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		n++;
	}
	t = n - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
