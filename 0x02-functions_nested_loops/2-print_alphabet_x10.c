#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
