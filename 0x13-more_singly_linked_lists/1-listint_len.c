#include "lists.h"

/**
 * listint_len - function to print linked list number
 * @h: pointer
 * Return: list
 */


size_t listint_len(const listint_t *h)
{
	size_t a = 0;


	while (h)
	{
		a++;
		h = h->next;
	}


	return (a);
}
