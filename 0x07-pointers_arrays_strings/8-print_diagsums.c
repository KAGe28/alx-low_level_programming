#include "main.h"

/**
  * print_diagsums - Prints the sum of the 2 diagonals
  * @a: a pointer to int
  * @size: size of array
  * Return: nothing
  */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int *p1 = a;
	int *p2 = a + size - 1;

	for (i = 0; i < size; i++)
	{
		s1 += *(p1 + i * size + i);
		s2 += *(p2 + i * size - i);
	}
	printf("%d, %d\n", s1, s2);
}
