#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * @d: A dog struct
 *
 * Return: Null void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
