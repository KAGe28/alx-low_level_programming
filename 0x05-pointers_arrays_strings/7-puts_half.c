#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: a pointer to a character
  * Return: the legth of s
  */

int _strlen(char *s)
{
	int i = 0;
	int l = 0;

	while (*(s + i) != '\0')
	{
		l += 1;
		i++
	}
	return (l);
}

/**
  * puts_half - prints half of a string
  * @str: a pointer to a character
  * Return: nothing
  */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int n = 0;

	l = _strlen(str);

	if (l % 2 == 0)
	{
		n = (l - 1) / 2;
		for (i = n + 1; i < l; i++)
			_putchar(str[i]);
	}
	else
	{
		n = l / 2;
		for (i = n + 1; i < l; i++)
			_putchar(str[i]);
	}	
	_putchar('\n');
}
