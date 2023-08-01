#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: pointer to head
 * @index: point of node deletion
 * Return: Nothing
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *type = *head;
	listint_t *type1;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = type->next;
		free(type);
		return (1);
	}
	while (i != (index - 1))
	{
		type = type->next;
		i++;
		if (type == NULL)
			return (-1);
	}
	type1 = type->next;
	type->next = type1->next;
	free(type1);
	return (1);
}
