#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: a pointer to the first string
  * @s2: a pointer to the second character
  * Return: a pointer to the resulting string dest
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

