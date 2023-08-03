#include "main.h"

/**
  * _sqrt_check - check for natural square root
  * @n: The number to check
  * @i: counter like loop
  * @count: square root
  * Return: square root of n, -1 otherwise
  */

int _sqrt_check(int n, int i, int count)
{
	if (n == 0)
		return (count);

	if (i % 2 != 0)
	{
		n -= i;
		count++;
	}
	return (_sqrt_check(n, i + 1, count));
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
	return (_sqrt_check(n, 0, 0));
}
