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
  * strtow - split a string into words
  * @str: a pointer to the string
  * Return: a pointer to an array of string
  */

char **strtow(char *str)
{
	int i, j, k, l1, l2;
	char **split = NULL;

	if (str == NULL || str == "")
		return (NULL);
	l1 = 0;/*get full length*/
	l2 = 0;/*get number of element*/

	for (i = 0; i < str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			l1++;
		if (str[i] == ' ' && str[i - 1] != ' ')
			l2++;
		l1++;
	}
	split = malloc(sizeof(char *) * l2);
	
	if (split == NULL)
		return (NULL);

	for (i = 0; i < l2; i++)
	{
		split[i] = malloc(sizeof(char) * l1 + 1);
		
		if (split == NULL)
		{
			for (j = 0; j < i; j++)
				free(split[j]);
			free(split);
		}
	}
	k = 0;
	for (i = 0; i < l2; i++)
	{
		for (j = 0; str[i][j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				split[k][j] = str[j];
				k++;
			}
		}
		split[k][j] = '\0';

	}


	return (split);
}
