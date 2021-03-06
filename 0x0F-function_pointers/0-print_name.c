#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: character pointer
  * @f: void pointer to function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
