#include "lists.h"
#include <string.h>

/**
  * add_node_end - function that adds a new node at the end of linked list
  * @head: list_t pointer of pointer
  * @str: constant character pointer
  *
  * Return: the address of the new element or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last;
	size_t n = 0;
	
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	n = strlen(str);
	ptr->str = strdup(str);
	ptr->len = n;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = ptr;
	}
	
	return (ptr);
}
