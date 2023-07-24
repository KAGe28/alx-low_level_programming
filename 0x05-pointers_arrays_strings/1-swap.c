#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: a pointer to the first integer
  * @b: a pointer to the second integer
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
