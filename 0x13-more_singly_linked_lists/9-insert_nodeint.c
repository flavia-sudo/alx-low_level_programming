#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of struct
 * @idx: unsigned int for location
 * @n: int type for value of new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *type = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	type = *head;
	if (type == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i != (idx - 1))
	{
		type = type->next;
		i++;
		if (type == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = type->next;
	type->next = node;
	return (node);
}
