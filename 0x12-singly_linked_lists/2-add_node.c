#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
  * add_node - function that adds a new node at the beginning of linked list
  * @head: list_t pointer of pointer
  * @str: constant character pointer for the new string
  *
  * Return: the address of the new element or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t n = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	n = strlen(str);
	newnode->str = strdup(str);
	newnode->len = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
