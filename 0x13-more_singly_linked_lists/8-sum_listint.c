#include "lists.h"
/**
 * sum_listint - function that returns sum
 * @head: pointer to head note
 * Return: Nothing
 */
int sum_listint(listint_t *head)
{
	unsigned int addup;

	if (head == NULL)
		return (0);

	addup = 0;
	while (head != NULL)
	{
		adddup += head->n;
		head = head->next;
	}
	return (addup);
}
