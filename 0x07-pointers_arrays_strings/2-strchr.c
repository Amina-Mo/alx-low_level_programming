#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			break;
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (0);
	}
}

