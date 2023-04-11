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
	int i = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		size++;
	}
	ptr = malloc(size * sizeof(char));
	p = ptr;
	while (i < size)
	{
		*ptr++ = *p++;
		i++;
	}
	p[i] = '\0';
	if (i != size)
	{
		return (NULL);
	}
	return (ptr);
}
