#include "main.h"

/**
  * free_grid - frees a 2 dimensional array of integers
  * @grid: a pointer a pointer of integer
  * @height: height of array
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
