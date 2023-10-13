#include "variadic_functions.h"

/**
  * _strlen_const- returns the length of a string
  * @s: the string
  * Return:length of s
  */

int _strlen_const(const char * const s)
{
	int l = 0;

	if (s[l] == '\0')
		return (0);
	l++;
	return (l + _strlen_const(s + 1));
}


/**
  * print_all- prints anything
  * @format: a list of types of arguments passed to the function
  * Return: Nothing.
  */

void print_all(const char * const format, ...)
{
	int i = 0, c = 0, j = 0, len = 0;
	double f;
	char *s = NULL, *separator = ", ";
	va_list args;

	len = _strlen_const(format);

	va_start(args, format);

	while (j < len)
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				break;
		}
		if (j < (len - 1))
			printf("%s", separator);
		j++;
	}
	printf("\n");
	va_end(args);
}
