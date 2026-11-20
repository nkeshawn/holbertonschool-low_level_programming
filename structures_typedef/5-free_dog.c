#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog
 *
 * Return: always nothing (successful)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
