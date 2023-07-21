#include "main.h"

/**
  * main - Entry Point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	int f = 3;
	int b = 5;

	for (i = 1; i <= 100; i++)
	{
		if ( i % f == 0 && i % b == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % f == 0)
		{
			printf("Fizz ");
		}
		else if (i % b == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
