#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: size of array
  * @c: character of initialization
  * Return: a pointer to the array or NULL
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t = NULL;

	if (size == 0)
		return (0);
	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
/*	free(t);*/
	return (t);
}
