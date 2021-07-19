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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _HEADER_H_*/
