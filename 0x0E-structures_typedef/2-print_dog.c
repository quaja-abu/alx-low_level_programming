#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - function that prints a struc dog
  * @d: struct pointer
  */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	if (d->name != NULL || d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
