#include "lists.h"


/**
 * free_listint - a func that frees a listint_t list
 * @head: a node
 */


void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

