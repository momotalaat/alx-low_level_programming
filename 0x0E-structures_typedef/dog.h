#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a new type
 * @name: 1st type of struct dog
 * @age: 2nd type of struct dog
 * @owner: 3d type of struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - anew typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
