#include "main.h"

/**
  * main- Entry point
  * @argc: a count of the arguments supplies to the program
  * @argv: an array of pointers to arguments(strings)
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int i, num;
	int cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	char *arg = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	arg = argv[1];

	if (*arg == '-')
		arg++;
	for (i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			cents++;
		}
	}
	printf("%d\n", cents);
	return (0);
}
