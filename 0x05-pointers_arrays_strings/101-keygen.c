#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int pass[100];
	int x, y;
	int n = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		n += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - n) - '0' < 78)
		{
			y = 2772 - n - '0';
			n += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
