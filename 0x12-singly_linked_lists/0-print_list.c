#include "lists.h"
/**
 * print_list - prints all the elememnts
 * @h: pointer to node struct
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int x;
	const list_t *d = NULL;

	x = 0;
	d = h;
	while (d != NULL)
	{
		if (d->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", d->len, d->str);
		d = d->next;
		x++;
	}
	return (x);
}
