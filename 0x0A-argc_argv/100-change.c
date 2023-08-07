#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: count of the arguments supplied to the program
  * @argv: an array of pointers to the strings which are those arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int cents = 0;
	int n = 0;
	int coins [] = {25, 10, 5, 2, 1};
	int size = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	n = atoi(argv[1]);
	for (i = 0; i < size && n > 0; i++)
	{
		while (n >= coins[i])
		{
			n -= coins[i];
			cents++;
		}

	}
	printf("%d\n", cents);
	return (0);
}
