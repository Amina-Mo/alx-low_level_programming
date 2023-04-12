#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: fisrt string
 * @s2: sec string
 * Return: pointer to new memo
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *ptr;
	char *p;
	int i = 0;
	int j = 0;
	
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			size1 = size1 + 1;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			size2 = size2 + 1;
		}
	}
	ptr = malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	while (i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	j = size1;
	while (j < size2 + size1)
	{
		p[j] = s2[j - size1];
		j++;
	}
	p[size2 + size1] = '\0';
	return (ptr);
}

