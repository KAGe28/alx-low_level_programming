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
	(void) *argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);

	return (0);
}
