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
	int sum;
	int i;
	
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (atol(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}		
		printf("%d\n", sum);
	}

	return (0);
}
