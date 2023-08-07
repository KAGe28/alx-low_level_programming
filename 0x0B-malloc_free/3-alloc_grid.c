#include "main.h"

/**
  * alloc_grid - returns to 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  * Return: a pointer to the array or NULL
  */

int **alloc_grid(int width, int height)
{
	int i;
	int **t = NULL;

	if (height <= 0 || width <= 0)
		return (NULL);
	t = (int **) malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		t[i] = (int *) malloc(sizeof(int) * width);
	if (t[i] == NULL)
		return (NULL);
	for (i = 0; i < height * width; i++)
	{
		t[i] = 0;
	}
	for (i = 0; i < height; i++)
		free(t[i]);
	free(t);
	return (t);
}
