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
	int j;
	int **t = NULL;

	if (height <= 0 || width <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		t[i] =  malloc(sizeof(int) * width);
	if (t[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
			free(t[i]);
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}

	for (i = 0; i < height; i++)
		free(t[i]);
	free(t);
	return (t);
}
