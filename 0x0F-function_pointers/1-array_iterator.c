#include "function_pointers.h"

/**
  * array_iterator- Executes a function given as a parameter
  * @array: Array passed
  * @size: The size of the array
  * @action: a pointer to function you need to use
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || size > 0 || action != NULL)
	{
		for (i = 0; i < size; i++)
			(action)(array[i]);
	}
}

