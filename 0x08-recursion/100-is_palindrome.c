#include "holberton.h"

/**
  * is_palindrome - function to check the string is palindrome or not
  * @s: character pointer
  *
  * Return: 1 is a string is a plaindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;
	char *p = s;
	char *pal = "";

	if (s[i] != '\0')
	{
		++i;
		is_palindrome(&s[i]);
		pal[j] = s[--i];
		j++;
	}
	if (pal == p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
