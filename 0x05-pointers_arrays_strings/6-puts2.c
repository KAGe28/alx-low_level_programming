#include "main.h"

/**
  * _puts2 - prints every other character of a string followed by a new line to stdout
  * @str: a pointer to a character
  * Return: nothing
  */

void _puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
