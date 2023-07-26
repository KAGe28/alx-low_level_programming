#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: the character that will be checked
  * Return: 1 if c is lowercase, 0 otherwise
  */

int _islower(int c)
{
	c = (c >= 97 && c <= 122) ? 1 : 0;

	return (c);
}

/**
  * _toupper - Converts a lowercase character to uppercase one
  * @c: the character that will be converted
  * Return: c to uppercase
  */

char _toupper(char c)
{
	if (_islower(c))
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/**
  * string_toupper - changes all lowercase letter of strings to uppercase
  * @s: a pointer to the string
  * Return: a pointer to the resulting string dest
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = _toupper(s[i]);
	return (s);
}

