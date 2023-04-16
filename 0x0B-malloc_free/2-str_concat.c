#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: fisrt string
 * @s2: sec string
 * Return: pointer to new memo
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1;
	size_t len2;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = (char *) malloc(len1 + len2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, len2 + 1);
	return (ptr);
}

