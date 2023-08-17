#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: the array given
  * @size: number of elements in the array
  * @cmp: the pointer to the function for compare value
  * Return: the index of the first element, -1 otherwise
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ok = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			ok = i;
			break;
		}
		else
		{
			ok = (-1);
		}
	}
	return (ok);
}
