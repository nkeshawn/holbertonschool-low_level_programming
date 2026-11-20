#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialise a variable of type struct dog
 * @d: a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: always nothing (successful).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
