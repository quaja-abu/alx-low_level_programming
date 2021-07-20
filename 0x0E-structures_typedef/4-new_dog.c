#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

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
	char *cpname = "", *cpowner = "";
	int len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	len = _strlen(name);
	d->name = malloc(sizeof(char) * len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	len = _strlen(owner);
	d->owner = malloc(sizeof(char) * len + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	cpname = _strcpy(d->name, name);
	cpowner = _strcpy(d->owner, owner);
	d->name = cpname;
	d->age = age;
	d->owner = cpowner;

	return (d);
}
/**
  * _strlen - function to find the length of a string
  * @str: character pointer
  *
  * Return: integer value
  */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
  * _strcpy - function to copy src string to dest
  * @dest: charcater pointer
  * @src: character pointer
  *
  * Return: character pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
