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
  * str_concat - concatenantes two string
  * @s1: a pointer to the first string
  * @s2: a pointer to the second
  * Return: a pointer to a new string (s1 + s2) + '\0'
  */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *concat = NULL;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	concat = malloc(sizeof(char) * (l1 + l2 + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0, i = l1; s2[j] != '\0'; j++, i++)
		concat[i] = s2[j];
	return (concat);
}
