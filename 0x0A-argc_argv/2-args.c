#include <stdio.h>

/**
  * main - functio that prints all arguments
  * @argc: integer value to hold number of arguments
  * @argv: character pointer to hold the name of arguments
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
