#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate of the string
 * @str: the duplicated string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int x = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
