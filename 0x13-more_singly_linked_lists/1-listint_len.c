#include "lists.h"

/**
  * listint_len - function that returns the number of elements
  * @h: constant listint_t structure
  *
  * Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
