#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Always 0 (Succes)
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		if (i < 8 && j < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');


	return (0);
}
