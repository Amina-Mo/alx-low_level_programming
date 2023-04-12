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
	char *tmp = str
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*tmp != '\0')
	{
		size = size + 1;
	}
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	while (*str != '\0')
	{
		*p++ = *str++;
	}
	return (ptr);
}

