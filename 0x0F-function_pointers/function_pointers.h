#include <stddef.h>
#ifndef _FUNCTIONPOINTER_H_
#define _FUNCTIONPOINTER_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));

#endif /* _FUNCTIONPOINTER_H_*/
