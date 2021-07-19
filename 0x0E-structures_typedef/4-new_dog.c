#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: chracter pointer
  * @age: floating point value
  * @owner: character pointer
  *
  * Return: dog_t pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int nlen, olen, i = 0;

	while (name[i] != '\0')
	{
		nlen++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		olen++;
		i++;
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * nlen);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d-> owner = malloc(sizeof(char) * olen);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
