#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to char string input
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int r;

	if (b == NULL)
		return (0);
	r = 0;
	while (b[r] != '\0')
	{
		if (b[r] != '\0' && b[r] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[r] == '1')
		{
			count ^= check;
		}
		r++;
	}
	return (count);
}
