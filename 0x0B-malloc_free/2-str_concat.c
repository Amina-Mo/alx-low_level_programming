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
	int i = 0;
	int j = 0;
	
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		size1 = size1 + 1;
	}
	while (*s2 != '\0')
	{
		size2 = size2 + 1;
	}
	ptr = malloc((size1 + size2 + 1) * sizeof(char));
	while (i < size1)
	{
		ptr[i] = s1[i];
		ptr++;
		s1++;
	}
	j = size1;
	while (j < size2 + size1)
	{
		ptr[j] = s2[j - size1];
		ptr++;
		s2++;
	}
	ptr[size2 + size1] = '\0';
	return (ptr);
}

