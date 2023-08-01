#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t
 * @head: pointer to struct listint_t type
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *start = NULL;
	listint_t *start1 = NULL;

	if (head == NULL)
		return;
	start = *head;
	while (start != NULL)
	{
		start1 = start;
		start = start->next;
		free(start1);
	}
	*head = NULL;
}
