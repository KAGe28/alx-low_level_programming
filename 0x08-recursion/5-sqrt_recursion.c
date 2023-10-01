#include "main.h"

/**
  * check_sqrt - Checks the perfect square
  * @n: the number tested
  * @i: odd number
  * @count: count and finally the square root
  * Return: the perfect square root
  */

int check_sqrt(int n, int i, int count)
{
	if (n == 0)
		return (count);
	if (n < 0)
		return (-1);
	n -= i;
	count++;
	return (check_sqrt(n, i + 2, count));
}

/**
 * _sqrt_recursion - returns the natural square root of a nuber
 * @n: the number
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(n, 1, 0));
}
