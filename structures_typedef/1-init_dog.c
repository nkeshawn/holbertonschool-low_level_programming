#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
