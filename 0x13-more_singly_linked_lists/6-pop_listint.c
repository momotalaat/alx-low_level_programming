#include "lists.h"


/**
 * pop_listint - a func to deletes the head node
 *	of a listint_t
 *	linked list, and returns the head node’s data
 * @head: pointer
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	x = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;


	return (x);
}

