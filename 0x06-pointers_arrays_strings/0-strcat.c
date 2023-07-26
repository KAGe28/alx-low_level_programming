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
  * _strcat - Concatenates two strings
  * @dest: a pointer to the first string
  * @src: a pointer to the second character
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l;

	l = _strlen(dest);

	while (*(src + i) != '\0')
	{
		*(dest + l) = src[i];
		i++;
		l++;
	}
	return (dest);
}

