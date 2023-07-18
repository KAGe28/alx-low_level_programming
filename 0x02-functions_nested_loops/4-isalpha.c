#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * _isalpha - cheks for alphabetic character
  * @c: the character that will be checked
  *
  * Return: 1 if c is ,alpha 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
