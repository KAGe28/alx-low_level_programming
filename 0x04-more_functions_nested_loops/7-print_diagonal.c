#include "main.h"

/**
  *  print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  * Return: void
  */

void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i > 1 && j > 1)
				{
					for (k = i - 1; k < i; k++)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
