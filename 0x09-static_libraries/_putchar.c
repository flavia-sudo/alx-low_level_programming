#include "main.h"
#include <unistd.h>
/**
 * _putchar writes the character c to stdout
 * @c: The caharacter to print
 * Return: On success 1
 * On error, -1 is retyrned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
