#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees dogs
  * @d: got_t struct type
  */
void free_dog(dog_t *d)
{
	free(d);
}
