#include "lists.h"
/**
 * list_len - number of elements
 * @h: pointer to nodes
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *d;
	unsigned int i;

	d = malloc(sizeof(list_t));
	if (d == NULL)
	{
		return (0);
	}

	d = h;
	i = 0;
	while (d != NULL)
	{
		d = d->next;
		i++;
	}
	return (i);
}
