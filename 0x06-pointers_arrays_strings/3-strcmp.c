#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: -1 if s1 less than s2
 * 0 if equal
 * 1 is s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		return (-1);
	}
	else if (i == j)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
