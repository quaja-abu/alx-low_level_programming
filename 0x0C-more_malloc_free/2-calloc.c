/*
 * File: 2-calloc.c
 * Author: Bantegize Addis
 */

#include "holberton.h"
#include <stdlib.h>

/**
  * _calloc - function that allocates memory for an array using malloc
  * @nmemb: integer value
  * @size: integer value
  *
  * Return: pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	char *cpymem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);

	cpymem = c;
	
	for (i = 0; i < (size * nmemb); i++)
		cpymem[i] = '\0';

	return (c);

}
