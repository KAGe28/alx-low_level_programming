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

	else
	{
		n = atoi(argv[1]);

		while (n != 0)
		{
			if (n >= 25)
			{
				n -= 25;
			}
			else if (n >= 10)
			{
				n  -= 10;
			}
			else if (n >= 5)
			{
				n -= 5;
			}
			else if (n >= 2)
			{
				n -= 2;
			}
			else
			{
				n -= 1;
			}
				cents++;
		}

	}
	printf("%d\n", cents);
	return (0);
}
