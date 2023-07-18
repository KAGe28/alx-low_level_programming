#include "main.h"

/* more headers goes there */

/**
  * _abs - Computes the absolute value of integer
  * @n: the number that will be checked
  *
  * Return: The absolute value
  */

/**
  * print_last_digit - prints the last digit of a number
  * @n: the number that will be checked
  *
  * Return: the last digit
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return ((-1) * n);
	}
}

int print_last_digit(int n)
{
	int u;

	u = n % 10;

	_putchar(_abs(u) + '0');
	return (_abs(u));
}
