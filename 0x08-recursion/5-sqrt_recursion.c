#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root
  * @n: The given number
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _sqrt_recursion(x, y - 1));
}
