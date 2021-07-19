#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: dog struct type pointer
  * @name: character pointer
  * @age: float type
  * @owner: character pointer
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;
	
	ptr = malloc(sizeof(struct dog));
	ptr = d;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
