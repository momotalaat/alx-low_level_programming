#include "lists.h"

/**
 * add_node_end - afunction to add node at the end of list.
 * @head: list
 * @str: string
 *Return: address to element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *nod = malloc(sizeof(list_t));
	int x = strlen(str);

	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);
	nod->len = x;
	nod->next = NULL;

	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nod;
	return (nod);
}

