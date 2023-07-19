#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Always 0 (sucess)
  */
int main(void)
{
	long int n = 50;
	long int prev = 1;
	long int forw = 2;
	long int next = 0;
	int i;
	long int sum = forw;

	for (i = 2; i < n; i++)
	{
		next = prev + forw;
		prev = forw;
		forw = next;
		if (next < 4000000)
		{
			if (next % 2 == 0)
				sum += next;
		}
		else
		{
			break;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
