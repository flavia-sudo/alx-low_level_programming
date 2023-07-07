#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: memory whwre is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory wuth n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}
