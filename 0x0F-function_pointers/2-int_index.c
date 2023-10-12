#include "function_pointers.h"

/**
  * int_index- Searches for an integer
  * @array: Array passed
  * @size: The number of elements in the array
  * @cmp: a pointer to function to be used to compare values
  * Return: Index of the first element for which cmp doesn't return 0, else 0.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}

