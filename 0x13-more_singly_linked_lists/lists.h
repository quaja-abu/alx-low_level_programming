#ifndef _LINKEDLISTS_H_
#define _LINKEDLISTS_H_
#include <stdlib.h>

/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  *
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
#endif

