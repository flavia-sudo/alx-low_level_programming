#include "main.h"
/**
 * times_table -  Prints the 9 times table, starting with 0
 * Return: Output
 */
void times_table(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if  (z > 9)
			{
				a = z % 10;
				b = (z - a) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
	}
}
