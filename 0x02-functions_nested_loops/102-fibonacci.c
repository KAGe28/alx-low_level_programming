#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_alphabet - Prints the alphabet in lowercase
  *
  * Return: void
  */
int main(void)
{
	long int n = 50;
	long int prev = 1;
	long int forw = 2;
	long int next = 0;
	int i;
	
	printf("%ld, ", prev);
	printf("%ld, ", forw);

	for (i = 0; i < n; i++)
	{
		next = prev + forw;
		prev = forw;
		forw = next;
		printf("%ld", next);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");

	return (0);
}
