#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
			break;
		}
		else
		{
			ptr++;
		}
	}
	if (*ptr == '\0')
	{
		return (NULL);
	}
}

