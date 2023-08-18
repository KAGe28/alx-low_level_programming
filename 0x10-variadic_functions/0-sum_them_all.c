#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all parameters
  * @n: the parameter(s)
  * Return: sum of n
  */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, (int)n);

	for (i = 0; i < (int)n; i++)
		s += va_arg(args, int);
	va_end(args);

	return (s);
}
