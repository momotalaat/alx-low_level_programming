#include "lists.h"

/**
 *add_node - afunction to add node to the beginning of linked list.
 *@head: list
 *@str: string
 *Return: new element adress
 */

list_t *add_node(list_t **head, const char *str)
{
	int tmp = strlen(str);

	list_t *nod = malloc(sizeof(list_t));

	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);
	nod->len = tmp;
	nod->next = (*head);

	*head = nod;
	return (nod);
}

