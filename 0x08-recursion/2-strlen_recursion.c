#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to print
 * Return:Integer value
 */
int _strlen_recursion(char *s)
{
	if (*S == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
