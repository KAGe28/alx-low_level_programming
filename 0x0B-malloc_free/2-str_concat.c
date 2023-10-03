#include "main.h"

/**
  * _strlen- Returns the length of a string
  * @s: the string
  * Return: The length of s
  */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;
	return (l);
}

/**
  * str_concat- concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * Return: a pointer to the string s1 + s2, NULL otherwise
  */

char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	int i, j;
	int l1 = 0;
	int l2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0, j = l1; i < l2; i++, j++)
		str[j] = s2[i];
	str[j] = '\0';
	return (str);
}
