#include "dog.h"

/**
 * init_dog - a function that initialize
 *		a variable of type struct dog
 * @d: 1st element
 * @name: 2nd element
 * @age: 3rd element
 * @owner: 4th element
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
