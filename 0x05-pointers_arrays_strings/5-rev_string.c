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
	int start = 0;
	char *tmp;

	l = _strlen(s);

	for (i = l - 1; i >= 0; i--, start++)
		*(tmp + start) = s[i];
	i = 0;
       while (*(s + i) != '\0')	
	_putchar('\n');
}
