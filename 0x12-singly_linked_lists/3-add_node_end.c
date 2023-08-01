#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to pointer of list_t
 * @str: pointer to string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *d;
	list_t *x;
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	x->str = strdup(str);
	x->len = i;

	if (*head == NULL)
	{
		*head = x;
		x->next = NULL;
		return (*head);
	}
	d = *head;
	while (d->next != NULL)
	{
		d = d->next;
	}
	d->next = x;
	x->next = NULL;
	return (*head);
}
