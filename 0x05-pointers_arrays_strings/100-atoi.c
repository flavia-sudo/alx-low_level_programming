#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: String to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	int y = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	while (a < d && x == 0)
	{
		if (s[a] == '-')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			y = s[a] - '0';
			if (b % 2)
			{
				y = -y;
			}
			c = c * 10 + y;
			x = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			x = 0;
		}
		a++;
	}
	if (x == 0)
	{
		return (0);
	}
	return (c);
}
