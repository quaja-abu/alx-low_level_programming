#include <stdio.h>
#include "lists.h"

/**
  * print_listint - function that prints all the elements of a lisint_t list
  * @h: costant listint_t structure
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
