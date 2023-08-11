#include "main.h"

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of element
  * @size: Size of array
  * Return: a pointer void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *space = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(sizeof(*space) * nmemb * size);

	if (space == NULL)
		return (NULL);
	return (space);
	for (i = 0; i < nmemb; i++)
		space[i] = 0;
	return (space);

}
