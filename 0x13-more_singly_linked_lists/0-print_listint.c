#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @h: listint_t type of node struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
