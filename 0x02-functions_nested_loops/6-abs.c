#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * _abs  - computes the absolute value of an integer
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
