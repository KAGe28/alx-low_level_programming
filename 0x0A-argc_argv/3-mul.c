#include "main.h"

/**
  * main- Entry point
  * @argc: a count of the arguments supplies to the program
  * @argv: an array of pointers to arguments(strings)
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	exit(EXIT_SUCCESS);
}
