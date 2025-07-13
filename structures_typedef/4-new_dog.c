#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];
	new_owner[i]= '\0';

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
