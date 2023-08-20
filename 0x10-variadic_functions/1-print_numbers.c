#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: the string to be printed between numbers
  * @n: the number of integers passed to the function
  * Return: Nothing.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const int num = va_arg(args, const int);

		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
