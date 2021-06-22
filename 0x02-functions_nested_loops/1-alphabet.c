#include "holberton.h"

/**
 * print_alphabet - prints alphabets in small letter
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
