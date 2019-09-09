#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialized details of dogs
 *
 * @name: name of dog
 * @age: how old the dog is
 * @owner: name of dog owner
 * @d: pointer to address of struct dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
