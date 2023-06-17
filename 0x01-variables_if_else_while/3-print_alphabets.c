#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

	for (ch = "a"; ch <= "Z"; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
