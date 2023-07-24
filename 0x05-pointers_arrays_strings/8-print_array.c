#include "main.h"

/**
  * _puts2 - prints every other character of a string followed by a new line to stdout
  * @str: a pointer to a character
  * Return: nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
