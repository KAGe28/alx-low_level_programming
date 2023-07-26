#include "main.h"

/**
  * reverse_array - copies a string
  * @a: a pointer to integer
  * @n: number of elements of the array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

