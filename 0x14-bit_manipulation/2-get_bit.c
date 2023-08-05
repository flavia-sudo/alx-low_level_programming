#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: unsigned long int type
 * @index: unsigned int type
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	check <<= index;
	if (check & n)
		return (1);
	else
		return (0);
}
