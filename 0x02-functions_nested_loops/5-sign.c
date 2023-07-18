#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_sign - prints the sign of a number
  * @n: the number that will be checked
  *
  * Return: 1 if c is lowercase, 0 otherwise
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
