#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free initialized space for new dogs
 *
 * @d: structure alias for dog_t
 *
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
