#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
  * string_nconcat - concatenantes two string
  * @s1: a pointer to the first string
  * @s2: a pointer to the second
  * @n:number of bytes
  * Return: a pointer to a new string (s1 + s2) + '\0'
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, l1, l2;
	char *concat = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if ((int)n >= l2)
		n = l2;
	concat = malloc(sizeof(char) * (l1 + n + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0, i = l1; j < (int)n && s2[j] != '\0'; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
