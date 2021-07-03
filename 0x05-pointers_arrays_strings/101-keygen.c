#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
  * randomPasswordGeneration - function to generate random password
  * 
  */

void randomPasswordGeneration(void)
{
	int i = 0;
	int randomizer = 0;
	char numbers[10] = "012345789";
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[8] = "!@#$^&*?";
	char password[10];

	srand((unsigned int) (time(NULL)));

	randomizer = rand() % 4;

	for (i = 0; i < 10; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

/**
  * main - to chek the function
  * Return: Always 0.
  */

int main(void)
{

	randomPasswordGeneration();
	printf("\n");

	return (0);
}
