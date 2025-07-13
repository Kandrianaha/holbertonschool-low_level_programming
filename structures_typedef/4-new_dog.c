#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: pointer to the new dog_t, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = malloc(strlen(owner) +1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	d->name = new_name;
	d->age = age;
	d->owner= new_owner;

	return (d);
}
