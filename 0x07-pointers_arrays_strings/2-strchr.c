#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen(char *s)
{
	int i;
	int l;

	for (i = 0; s[i] != '\0'; i++)
		l += 1;
	return (l);
}

/**
  * _strchr - Locates a character in a string
  * @s: a pointer to the string in which the character is looked for
  * @c: the character to be found
  * Return: a pointer to the first occurence of the character c
  */

char *_strchr(char *s, char c)
{
	int i;
	int l;

	l = _strlen(s);

	if (c == '\0')
		return (s + l);
	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
