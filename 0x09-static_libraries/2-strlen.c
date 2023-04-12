#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: the string to return length of
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

