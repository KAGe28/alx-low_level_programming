#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen(char *s)
{
	int i;
	int l;

	for (i = 0; s[i] != '\0'; i++)
		l += 1;
	return (l);
}

/**
  * print_chessboard - Prints the chessboard
  * @a: a pointer to a char
  * Return: nothing
  */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int l1;
	int l2;

	l2 = sizeof(a[0]) / sizeof(a[0][0]);
	l1 = l2;

	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
