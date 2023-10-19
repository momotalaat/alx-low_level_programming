#include "lists.h"

/**
 * print_list - afunction to print all the elements of a list_t list.
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	do {
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		x++;
	} while (h);

	return (x);
}

