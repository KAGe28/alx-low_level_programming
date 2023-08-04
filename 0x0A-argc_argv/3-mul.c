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
	int mul;
	int a;
	int b;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}

	return (0);
}
