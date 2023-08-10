#include "main.h"

/**
  * argstostr - concatenantes all the arguments of your program
  * @ac: a number of argument
  * @av: a pointer to a pointer
  * Return: a pointer to a new string or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int l = 0;
	char *args_conc = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;/* For each character */
		l++;/*For \n character*/
	}
	args_conc = malloc(sizeof(char) * (l + 1));

	if (args_conc == NULL)
		return (NULL);
	k = 0;/*for each char of new string*/

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args_conc[k] = av[i][j];
			k++;
		}
		args_conc[k] = '\n';
		k++;
	}

	return (args_conc);
}
