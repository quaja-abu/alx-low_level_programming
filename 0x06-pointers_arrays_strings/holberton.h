#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * _putchar - function for printing character
 * _strcat - function to concatinate two strings
 * _strncat - function to concatinate two string at most n size
 * _strncpy - function to copy a string 
 * _strcmp - function to compare two strings
 * reverse_array - function that reverse the content of an array of integers
 */

int _putchar(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);

#endif /* HOLBERTON_H */
