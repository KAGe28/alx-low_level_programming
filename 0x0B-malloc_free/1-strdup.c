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
  * _strdup - duplicates a string
  * @str: a pointer to char
  * Return: a pointer to the duplicated string or NULL
  */

char *_strdup(char *str)
{
	int i;
	int l;
	char *new_str = NULL;

	if (str == NULL)
		return (NULL);
	l = _strlen(str);
	new_str = malloc(sizeof(char) * l);

	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];
	/*free(new_str);*/
	return (new_str);
}
