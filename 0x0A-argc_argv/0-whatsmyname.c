#include <stdio.h>

/**
  * main - function to check program name
  * @argc: integer value that holds number of arguments
  * @argv: character pointer that holds arguments
  *
  * Return: Always 0
  */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
