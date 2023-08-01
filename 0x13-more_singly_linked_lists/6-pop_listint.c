#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to head node
 * Return: Nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *start = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	start = *head;
	value = start->n;
	*head = start->next;
	free(start);
	return (value);
}
