#ifndef _HEADER_H_
#define _HEADER_H_

/**
  * struct dog - structure to define three values
  * @name: character pointer
  * @age: float value
  * @owner: character pointer
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _HEADER_H_*/
