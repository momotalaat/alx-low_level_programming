#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: new struct of print_dog functin
 * Return: If an element of d is NULL
 *		print (nil) instead of this element
 *		(if name is NULL, print Name: (nil))
 *		If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";

	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
