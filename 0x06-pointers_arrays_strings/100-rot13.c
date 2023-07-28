#include "main.h"

/**
  * rot13 - Encodes a string using rot13
  * @s: a pointer to the string
  * Return: a pointer to the resulting string s
  */

char *rot13(char *s)
{
	char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r1[j] != '\0'; j++)
		{
			if (s[i] == r1[j])
				s[i] = r2[j];
		}
	}
	return (s);
}

