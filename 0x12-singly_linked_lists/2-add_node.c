#include "lists.h"
/**
 * add_node - adds a new node at the beginning 
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list *d = NULL;
	unsigned int i;

	d = malloc(sizeof(list_t));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	d->len = i;
	d->str = strdup(str);
	d->next = *head;
	*head = d;
	return (*head);
}
