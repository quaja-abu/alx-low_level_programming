#ifndef _LINKEDLISTS_H_
#define _LINKEDLISTS_H_
#include <stdlib.h>

int _putchar(char);

/**
  * struct lists_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * fot Holberton project
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif
