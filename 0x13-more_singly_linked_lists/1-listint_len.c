#include "lists.h"
#include <stdio.h>
/**
 * listint_len - number of elements in a linked
 * @h: listint_t type of node struct
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
