#include "lists.h"
/**
 * sum_listint - function that returns sum
 * @head: pointer to head note
 * Return: Nothing
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
