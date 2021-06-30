#include "holberton.h"

/**
 * leet - function to encode strings into 1337
 * @s: character pointer
 *
 * Return: character
 */

char *leet(char *s)
{
	int i;
	int j;
	int k;
	int index = 0;
	int flag;

	char leet1[] = {'a', 'e', 'o', 't', 'l'};
	char leet2[] = {'A', 'E', 'O', 'T', 'L'};
	char leet3[] = {'4', '3', '0', '7', '1'};
	char temp;

	while (s[index] != '\0')
	{
		temp = s[index];
		i = 0;
		j = 0;
		k = 0;
		flag = 1;
		while (flag)
		{
			if ((temp == leet1[i]) || (temp == leet2[j]))
			{
				temp = leet3[k];
				/*s[index] = temp;*/
				flag = 0;
				break;
			}
			temp = s[index];
			i++;
			j++;
			k++;
		}
		s[index] = temp;
		index++;
	}
	return (s);
}
