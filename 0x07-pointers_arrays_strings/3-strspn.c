#include "main.h"
/**
 * _strspn - num of bytes
 * @s: initial string
 * @accept: string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *accept)
			{
				num = num + 1;
			}
			s++;
		}
		accept++;
	}
	return (num);
}

