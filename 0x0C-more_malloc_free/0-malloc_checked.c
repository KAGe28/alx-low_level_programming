#include "main.h"

/**
  * mallc_checked - allocates memory using malloc
  * @b: a integer
  * Return: a pointer void
  */

void *malloc_checked(unsigned int b)
{
	void *space = NULL;

	space = malloc(b);
	
	if (space == NULL)
		exit(98);
	return (space);

}
