#include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: the character that will be checked
  * Return: 1 if c is lowercase, 0 otherwise
  */

int _islower(int c)
{
	c = (c >= 97 && c <= 122) ? 1 : 0;

	return (c);
}

/**
  * _toupper - Converts a lowercase character to uppercase one
  * @c: the character that will be converted
  * Return: c to uppercase
  */

char _toupper(char c)
{
	if (_islower(c))
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/**
  * cap_string - Capitalize all words of string
  * @s: a pointer to the string
  * Return: a pointer to the resulting string dest
  */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			s[i] = _toupper(s[i]);
		switch (s[i - 1])
		{
			case ' ':
				s[i] = _toupper(s[i]);
				break;
			case '\t':
				s[i] = _toupper(s[i]);
				break;
			case '\n':
				s[i] = _toupper(s[i]);
				break;
			case ',':
				s[i] = _toupper(s[i]);
				break;
			case ';':
				s[i] = _toupper(s[i]);
				break;
			case '.':
				s[i] = _toupper(s[i]);
				break;
			case '!':
				s[i] = _toupper(s[i]);
				break;
			case '\?':
				s[i] = _toupper(s[i]);
				break;
			case '\"':
				s[i] = _toupper(s[i]);
				break;
			case '(':
				s[i] = _toupper(s[i]);
				break;
			case ')':
				s[i] = _toupper(s[i]);
				break;
			case '{':
				s[i] = _toupper(s[i]);
				break;
			case '}':
				s[i] = _toupper(s[i]);
				break;
			default:
				s[i] = s[i];
				break;
		}
	}

	return (s);
}

