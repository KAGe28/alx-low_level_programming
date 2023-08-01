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
  * _strpbrk - Searchs a string for any of a set of bytes
  * @s: a pointer to the string in which the character is looked for
  * @accept: the character to be found
  * Return: a pointer to the byte in s, Otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int l1;
	int l2;

	l1 = _strlen(s);
	l2 = _strlen(accept);

	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; i++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
