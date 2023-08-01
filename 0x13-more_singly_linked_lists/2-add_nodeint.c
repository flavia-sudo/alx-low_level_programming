#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node from the top
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start = NULL;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = *head;
	*head = start;
	return (*head);
}
