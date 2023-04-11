#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to point to
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	char *p;
	char *tmp = str;
	int i = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*tmp != '\0')
	{
		size = size + 1;
	}
	ptr = malloc(size * sizeof(char));
	p = ptr;
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	/*if (i != size)
	{
		return (NULL);
	}*/
	return (ptr);
}

