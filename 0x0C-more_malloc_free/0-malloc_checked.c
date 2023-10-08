#include "main.h"

/**
  * malloc_checked- Allocates memory using malloc
  * @b: memory to allocate
  * Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	void *mem = NULL;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
