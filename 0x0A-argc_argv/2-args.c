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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
