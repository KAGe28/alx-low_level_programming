#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_times_table - prints the n times table, starting with 0
  * @n: The number of time
  * Return: void
  */

void print_times_table(int n)
{
	int i;
	int j;
	int t;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				t = i * n;

				if (t == 0 && j == 0)
				{
					_putchar(t + '0');
				}
				else if (t == 0 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else
				{
					_putchar((t / 100 % 10) + '0');
					_putchar((t / 10 % 10) + '0');
					_putchar((t % 10) + '0');
				}
				if (j < (n - 1))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
