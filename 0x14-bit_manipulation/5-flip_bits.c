#include "main.h"
/**
 * countSetBits - to count set bits
 * @n: unsigned long int type
 * Return: number of bits you would need
 */
unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - function to return number of bits
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: Nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
