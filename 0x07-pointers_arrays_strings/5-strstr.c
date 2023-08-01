#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
		l += 1;
	return (l);
}

/**
  * _strstr - Locates a substring
  * @haystack: a pointer to the string in which the character is looked for
  * @needle: the character to be found
  * Return: a pointer to the beginning of the located substring or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l1;
	int l2;

	l1 = _strlen(haystack);
	l2 = _strlen(needle);

	if (l2 == 0)
		return (NULL);

	for (i = 0; i <= l1 - l2 + 1; i++)
	{
		j = 0;

		while (j < l2 && haystack[i + j] == needle[j])
			j++;
		if (j == l2)
			return (haystack + i);
	}

	return (NULL);
}
