#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a character
  * Return: length of s
  */

int _strlen(char *s)
{
	int i = 0;
	int l = 0;

	while (*(s + i) != '\0')
	{
		l += 1;
		i++;
	}

	return (l);
}
