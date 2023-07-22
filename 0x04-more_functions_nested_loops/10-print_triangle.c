#include "main.h"

/**
  *  print_triangle - Prints a triangle followed by a new line
  * @size: The size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j <= i; j--)
				_putchar(' ');
			for (k = 1; k <= 1; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
