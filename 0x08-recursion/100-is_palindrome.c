#include "holberton.h"
int _strlen(char *s);
int _checkPalindrome(char *, int, int);

/**
  * is_palindrome - function to check a string is palindrome or not
  * @s: character pointer
  *
  * Return: 1 if it is palindrome 0 otherwise
  */
int is_palindrome(char *s)
{
	int val;
	int len;

	len = _strlen(s);
	len = len - 1;
	val = _checkPalindrome(s, 0, len);

	if (val == 1)
	{
		return (val);
	}
	else
	{
		return (val);
	}

}
/**
  * _strlen - function to calculate string lenght
  * @s: character pointer
  *
  * Return: integer value
  */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		i += _strlen(&s[i]);
	}
	return (i);
}
/**
  * _checkPalindrome - function to check a string is palindrome or not
  * @s: character pointer
  * @i: integer value
  * @j: integer value
  *
  * Return: 1 or 0
  */
int _checkPalindrome(char *s, int i, int j)
{
	if (i < 0 || j < 0)
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (_checkPalindrome(s, i + 1, j - 1));
	}
	return (0);
}
