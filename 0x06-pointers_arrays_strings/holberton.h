#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * _putchar - function for printing character
 * _strcat - function to concatinate two strings
 * _strncat - function to concatinate two string at most n size
 * _strncpy - function to copy a string
 * _strcmp - function to compare two strings
 * reverse_array - function that reverse the content of an array of integers
 * string_toupper - function to convert lowercase strings to uppercase
 * cap_string - function that capitalize all words of a string
 * leet - encoding a string into 1337
 * rot13 - function that encodes a string using rot13
 * print_number - function to print numbers using _putchar
 * infinite_add - function to add two numbers
 */

int _putchar(char s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void check(int i, int j, int k, int c, char *r, char *n1, char *n2);
void print_buffer(char *b, int size);

#endif /* HOLBERTON_H */
