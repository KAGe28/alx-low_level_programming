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
  * _strncat - Concatenates two strings
  * @dest: a pointer to the first string
  * @src: a pointer to the second character
  * @n: number of bytes
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	l = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}

