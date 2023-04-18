#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
