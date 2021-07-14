  /*
   * File: 100-argstostr.c
   * Author: Bantegize Addis
   */
#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments
  * @ac: integer value
  * @av: character of pointer of pointer
  *
  * Return: character pointer
  */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, arg, size = ac, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			size++;
	}
	ptr = malloc(sizeof(*ptr) * size + sizeof(char));

	if (ptr == NULL)
		return (NULL);
	i  = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			ptr[i++] = av[arg][j];
		ptr[i++] = '\n';
	}
	ptr[size] = '\0';

	return (ptr);
}
