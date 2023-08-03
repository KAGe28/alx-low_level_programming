#include "main.h"

/**
  * _sqrt_check - check for natural square root
  * @n: The number to check
  * Return: square root of n, -1 otherwise
  */

int _sqrt_check(int n)
{
	int i = 0;
	int count = 0;

	while (n > 0)
	{
		if (i % 2 != 0)
		{
			n -= i;
			count++;
		}
		i++;
	}
	if (n == 0)
		return (count);
	return (-1);
}

/**
  * _sqrt_recursion - Returns square root of a number
  * @n: the given number
  * Return: square root of n, -1 otherwise
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n));
}
