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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
