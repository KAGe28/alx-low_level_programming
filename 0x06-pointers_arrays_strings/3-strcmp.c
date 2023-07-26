#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: a pointer to a string
  * Return: The length of s
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

/**
  * _strcmp - Compares two strings
  * @s1: a pointer to the first string
  * @s2: a pointer to the second character
  * Return: a pointer to the resulting string dest
  */

int _strcmp(char *s1, char *s2)
{
	int l1;
	int l2;
	int r;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (l1 == l2)
		r = 0;
	if (l1 < l2)
		r = -15;
	if (l1 > l2)
		r = 15;
	return (r);
}

