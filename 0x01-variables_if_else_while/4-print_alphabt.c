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

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 || i != 113)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
