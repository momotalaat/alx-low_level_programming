#include "dog.h"

/**
 * *new_dog - a function that creates a new dog.
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Returb: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = (dog_t *)malloc(sizeof(dog_t));

	if (!new_d)
	return (NULL);

	new_d->name = (char *)malloc(strlen(name) + 1 );
	new_d->owner = (char *)malloc(strlen(owner) + 1 );

	if (!new_d->name || !new_d->owner)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	strcpy(new_d->name, name);
	new_d->age = age;
	strcpy(new_d->owner, owner);
	return (new_d);
}
