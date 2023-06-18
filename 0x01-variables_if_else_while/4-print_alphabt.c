#include <stdio.h>
/**
 * main - Prints alphabets in lowercase without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc < 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
