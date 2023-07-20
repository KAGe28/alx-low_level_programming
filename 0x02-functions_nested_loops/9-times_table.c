#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * times_table - prints the 9 times table, starting with 0
  *
  * Return: void
  */

void times_table(void)
{
	int i;
	int n;
	int t;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			t = i * n;
			if (t == 0)
			{
				_putchar(t + '0');
			}
			else if (t > 0 && t < 10
			{
				_putchar(' ');
				_putchar(t + '0');
			}
			else
			{
				_putchar((t / 10 % 10) + '0');
				_putchar((t % 10) + '0');
			}
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
