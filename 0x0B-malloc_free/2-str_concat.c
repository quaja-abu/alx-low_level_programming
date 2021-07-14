#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, lent, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len1++;

	for (index = 0; s2[index]; index++)
		len2++;

	lent = (sizeof(char) + len1 + len2);
	concat = malloc(sizeof(char) * lent);

	if (concat == NULL)
		return (NULL);

	lent = 0;

	for (index = 0; s1[index]; index++)
		concat[lent++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[lent++] = s2[index];

	concat[lent] = '\0';

	return (concat);
}
