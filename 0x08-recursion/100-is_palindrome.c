#include "holberton.h"
int checkAgain(char *, char *);

/**
  * is_palindrome - function to check the string is palindrome or not
  * @s: character pointer
  *
  * Return: 1 is a string is a plaindrome and 0 if not
  */

int is_palindrome(char *s)
{
	char *ptr = s;
	char *rev;
	int n;

	if (*ptr != '\0')
	{
		++ptr;
		is_palindrome(ptr);
	}
	--ptr;
	rev = s;
	n = checkAgain(rev, ptr);
	return (n);
}
/**
  * checkAgain - function for cross check
  * @rev: character pointer
  * @ptr: character pointer
  *
  * Return: interger value
  */

int checkAgain(char *rev, char *ptr)
{
	if (ptr >= rev)
	{
		if (*ptr == *rev)
		{
			--ptr;
			rev++;
		}
		checkAgain(rev, ptr);
	}
	if (rev > ptr)
		return (1);
	else
		return (0);
}
