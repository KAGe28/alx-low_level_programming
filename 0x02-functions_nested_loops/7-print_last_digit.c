#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_last_digit  - prints the last digit of a number
  * @n: the number that will be checked
  *
  * Return: the last digit
  */

/**
  * bs  - computes the absolute value of an integer
  * @n: the number that will be checked
  *
  * Return: the absolute value
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

	return (_abs(u));
}
