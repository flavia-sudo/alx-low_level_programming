#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start = NULL;
	listint_t *d = NULL;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	if (*head == NULL)
	{
		*head = start;
		start->next = NULL;
		return (*head);
	}

	d = *head;
	while (d->next != NULL)
	{
		d = d->next;
	}
	d->next = start;
	start->next = NULL;

	return (*head);
}
