3include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: pointer to struct of listint type
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *d = NULL;

	while (head != NULL)
	{
		d = head;
		head = head->next;
		free(d);
	}
}
