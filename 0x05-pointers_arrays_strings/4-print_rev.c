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
  * print_rev - prints a string in reverse
  * @s: a pointer to a character
  * Return: nothing
  */

void print_rev(char *s)
{
	int i = 0;
	int l = 0;

	l = _strlen(s);

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
