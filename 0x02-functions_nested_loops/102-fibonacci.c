#include "main.h"

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
	long int next;
	int i;
	
	printf("%ld, ", prev);
	printf("%ld, ", forw);

	for (i = 0; i < n; i++)
	{
		fibo = prev + forw;
		prev = forw;
		forw = fibo;
		printf("%ld", fibo);
		if (i < (term - 1))
			printf(", ");
	}
	printf("\n");
}
