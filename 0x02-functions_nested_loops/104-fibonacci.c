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
	unsigned int n = 98;
	unsigned int prev = 1;
	unsigned int forw = 2;
	unsigned int next = 0;
	int i;

	printf("%lu, ", prev);
	printf("%lu, ", forw);

	for (i = 2; i < n; i++)
	{
		next = prev + forw;
		prev = forw;
		forw = next;
		printf("%lu", next);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");

	return (0);
}
