#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: anew type of struct free_dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
