#include "lists.h"
/**
 * free_list - that frees a list_t list
 * @head: pointer to nodes
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
