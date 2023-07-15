#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Succes)
  */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(s, strlen(s), 1, stderr);

	fwrite("\n", 1, 1, stderr);
	return (1);
}
