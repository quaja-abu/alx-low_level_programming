/*
 * File: 1-string_nconcat.c
 * Author: Bantegize Addis
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenated two strings
 * @s1: character pointer for first string
 * @s2: character pointer for second string
 * @n: integer value for length
 *
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1 = 0, len = 0, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	len  = (sizeof(char) + len1 + n);
	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	len = 0;
	while (s2[i])
		len++;
	for (i = 0; s1[i] != '\0'; i++)
		str[size++] = s1[i];
	if (n >= len)
	{
		for (i = 0; s2[i]; i++)
			str[size++] = s2[i];
	}
	else
	{
		for (i = 0; s2[i] && i < n; i++)
			str[size++] = s2[i];
	}
	str[size] = '\0';
	return (str);
}
