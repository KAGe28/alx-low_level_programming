#include "variadic_functions.h"

/**
  * sum_them_all- Returns the sul of all its parameters
  * @n: integers parameters
  * Return: Sum of n
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
