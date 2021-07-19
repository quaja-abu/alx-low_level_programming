#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: chracter pointer
  * @age: floating point value
  * @owner: character pointer
  *
  * Return: dot_t value
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
