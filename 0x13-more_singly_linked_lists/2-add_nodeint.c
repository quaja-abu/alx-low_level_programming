#include "lists.h"

/**
  * add_nodeint - function to add a new node at the beginnig of a list
  * @head: pointer of pointer
  * @n: constant integer value
  *
  * Return: address of the new element of NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
