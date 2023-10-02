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
	int n = 0;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		n += 1;
	}
	printf("%d\n", n);
	exit(EXIT_SUCCESS);
}
