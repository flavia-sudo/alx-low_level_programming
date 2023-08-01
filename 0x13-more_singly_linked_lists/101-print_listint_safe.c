#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer to the head of listint_t to check
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *type, *type1;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	type = head->next;
	type1 = (head->next)->next;

	while (type1)
	{
		if (type == type1)
		{
			type = head;
			while (type != type1)
			{
				nodes++;
				type = type->next;
				type1 = type1->next;
			}
			type = type->next;
			while (type != type1)
			{
				nodes++;
				type = type->next;
			}
			return (nodes);
		}
		type = type->next;
		type1 = (type1->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (nodes);
}
