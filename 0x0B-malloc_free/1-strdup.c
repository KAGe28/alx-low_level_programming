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
  * _strdup- Returns a pointer to a new string which is a duplicate of s
  * @str: string that wiil be duplicate
  * Return: a pointer to the duplicate string, NULL otherwise
  */

char *_strdup(char *str)
{
	char *new_str = NULL;
	int i, l = 0;


	if (str == NULL)
		return (NULL);
	l = _strlen(str);
	new_str = malloc(sizeof(char) * (l + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}
