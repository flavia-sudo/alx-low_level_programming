#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @index: index of node to be returned
 * @head: pointer to head of node
 * Return: Nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *type;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head != NULL)
	{
		if (index == i)
		{
			type = head;
			return (type);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
