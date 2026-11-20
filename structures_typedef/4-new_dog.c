#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - function that calculates length of a string
 * @name: name of the string
 * Return: length of the string.
 */

unsigned int _strlen(char *name)
{
	unsigned int i;
	unsigned int length;

	i = 0;
	length = 0;

	while (name[i] != '\0')
	{
		length++;
		i++;
	}

	/* have to allocate space for the null terminator hence +1*/
	return (length + 1);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return:
 * if succeed, pointer of new dog
 * if it fails, return null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i;

	i = 0;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(_strlen(name) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < _strlen(name); i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(_strlen(owner) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < _strlen(owner); i++)
		dog->owner[i] = owner[i];

	return (dog);
}
