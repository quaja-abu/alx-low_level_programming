#include "holberton.h"

/**
 * print_alphabet_x10 - to print alphabets 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char ch;
	int call;

	for (call = 1; call <= 10; call++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
