#include "lists.h"
#include <stdio.h>

/**
  * print_list - function that prints all the elements of a list_t list.
  * @h: constant list_t
  *
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	printf("\n");
	return (n);
}
