#include "lists.h"
/**
 * reverse_listint - function that reverses
 * @head: pointer to head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *back = NULL;

	if (head == NULL)
		return (NULL);
	forward = *head;
	while (forward != NULL)
	{
		forward = forward->next;
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}
	*head = bck;
	return (*head);
}
