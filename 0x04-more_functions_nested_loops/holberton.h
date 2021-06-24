#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * _putchar - function to print characters
 * _isupper - function to check uppercase
 * _isdigit - funciton to digit or not
 * mul - function that multiplies two integers
 * print_numbers - print numbers 0 to 9
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * more_numbers - prints numbers 0 to 14 ten times
 * print_line - drwaws a stright line in the terminal
 * print_diagonal - print \ line
 * print_square - prints a square 
 */

int _putchar(char);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);

#endif	/* HOLBERTON_H */
