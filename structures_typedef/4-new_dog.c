#include <stdlib.h>
#include "dog.h"

/**
* _strcpy - copies a string
* @dest: destination
* @src: source string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
* _strdup - allocates meemory and duplicates a string
* @str: string to duplicate
* Return: pointer to new string or NULL
*/
char *_strdup(char *str)
{
int i = 0;
char *copy;

if (str == NULL)
return (NULL);

while (str[i])
i++;

copy = malloc(sizeof(char) * (i + 1));
if (copy == NULL)
return (NULL);

i = 0;
while (str[i])
{
	copy[i] = str[i];
	i++;
}
copy[i] = '\0';

return (copy);
}

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner's name
* Return: pointer to new dog, NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = _strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner =  _strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->age = age;

return (d);
}
