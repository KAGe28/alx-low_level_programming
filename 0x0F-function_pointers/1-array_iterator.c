#include "function_pointers.h"

/**
  * array_iterator - executes a function
  * @array: the array given
  * @size: Size of the array
  * @action: the pointer to a function
  * Description: Executes a function given as a parameter
  * on each element of an array
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size <= 0)
		exit(EXIT_FAILURE);

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
