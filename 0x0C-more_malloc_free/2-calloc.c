/*
 * File: 2-calloc.c
 * Author: Bantegize Addis
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	memset(c, 0, size);
	return (c);

}
