#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/**
  * function declarations
  * _putchar - function for printing characters
  * _memcpy - function that copies memory area
  * _strchr - a function that locates a character in a string
  * _strspn - a function that gets length of a prefix substring
  * _strpbrk - funciton to locate the first occurrence in the string
  */

int _putchar(char );
char *_memset(char *, char , unsigned int );
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *, char );
unsigned int _strspn(char *, char *);
char *_strpbrk(char *s, char *accept);

#endif /* _HOLBERTON_H */
