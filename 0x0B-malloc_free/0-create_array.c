#include "main.h"

/**
  * create_array- Creates an array of chars initializes with a char
  * @size: size of array
  * @c: the character that will be initialized
  * Return: a pointer to the array, NULL otherwise
  */

char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
