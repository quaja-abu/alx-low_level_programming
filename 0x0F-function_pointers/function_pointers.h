#ifndef _FUNCTIONPOINTER_H_
#define _FUNCTIONPOINTER_H_
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* _FUNCTIONPOINTER_H_*/
