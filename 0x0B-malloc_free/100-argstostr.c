#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: nb of args
 * @av: args
 * Return:  pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i;
	int j;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}
	p = (char *) malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[len] = av[i][j];
			len++;
		}
		p[len] = '\n';
		len++;
	}
	p[len] = '\0';
	return (p);
}
