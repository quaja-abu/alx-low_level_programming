#include "dog.h"
#include <stdio.h>

/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: dog struct type pointer
  * @name: character pointer
  * @age: float type
  * @owner: character pointer
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
