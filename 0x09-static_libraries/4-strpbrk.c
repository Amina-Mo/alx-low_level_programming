#include "main.h"
/**
 * _strpbrk - searches a str for n bytes
 * @s: string
 * @accept: compare
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *accept)
			{
				return (s);
				break;
			}
			s++;
		}
		accept++;
	}
	return (0);
}
