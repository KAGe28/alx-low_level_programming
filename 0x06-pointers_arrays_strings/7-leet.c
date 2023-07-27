#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: a pointer to the string
  * Return: a pointer to the resulting string s
  */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char leets[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = leets[j];
		}
	}
	return (s);
}

