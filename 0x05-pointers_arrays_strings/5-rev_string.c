#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: a pointer to a character
  * Return: The lengths of s
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
  * rev_string - reverse a string
  * @s: a pointer to a character
  * Return: nothing
  */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	int j = 0;
	char temp;

	l = _strlen(s);

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
