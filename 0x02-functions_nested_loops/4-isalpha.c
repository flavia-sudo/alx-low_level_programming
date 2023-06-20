#include "main.h"
/**
 * _isalpha - Checks for lowercase or uppercase letter
 * @c: Checks the character
 * Return: 1 for alphabetic character 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
