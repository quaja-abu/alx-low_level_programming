#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * _putchar - function to define _putchar that prints characters
 * reset_to_98 - function to takes a pointer to an int as parameter
 * swap_int - function to swap two integer values using pointer
 * _strlen - function that returns length of a string
 * _puts - a function that prints a string, followed by a new line
 * print_rev - function that prints string in reverse 
 * rev_sting - function that reverse a string
 * puts2 - function that prints other character of a string
 * puts_half - function that prints half of a string
 */
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);

#endif /* HOLBERTON_H */
