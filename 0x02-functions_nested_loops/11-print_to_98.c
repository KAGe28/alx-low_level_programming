#include "main.h"
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: the number
  *
  * Return: void
  */

void print_to_98(int n)
{
	int i;
	int ref = 98;

	if (n >= ref)
	{
		for (i = n; i >= ref; i--)
		{
			printf("%d", i);
			if (i > ref)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= ref; i++)
		{
			printf("%d", i);
			if (i < ref)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
