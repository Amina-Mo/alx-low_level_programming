#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: sub
 * @needle: org
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *sub = needle;
	char *org = haystack;
	char *start;

	while (*org != '\0')
	{
		start = org;
		while (*sub && *org && *org == *sub)
		{
			org++;
			sub++;
		}
		if (*sub == '\0')
		{
			return (start);
		}
		org = start + 1;
	}
	return (0);
}

