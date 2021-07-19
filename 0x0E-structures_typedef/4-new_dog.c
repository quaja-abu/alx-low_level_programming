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
	d = malloc(sizeof(*name));
	d = malloc(sizeof(age));
	d = malloc(sizeof(owner));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
