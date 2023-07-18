#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * _islower - cheks for lowercase character
  * @c: the character that will be checked
  *
  * Return: 1 if c is lowercase, 0 otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
