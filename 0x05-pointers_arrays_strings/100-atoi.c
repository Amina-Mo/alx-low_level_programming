#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: the string tp convert
 * Return: the integer
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ptr = s;

	while (*ptr != '\0')
	{
		while (*ptr < '0' || *ptr > '9')
		{
			if (*s == '-')
			{
				i++;
				ptr++;
			}
			else if (*ptr == '+')
			{
				j++;
				ptr++;
			}
			else
			{
				ptr++;
			}
		}
		while (*ptr >= '0' && *ptr <= '9')
		{
			k = k * 10 + *ptr ;
			ptr++;
		}
	}
	if (i > j)
	{
		return (-1 * k);
	}
	else
	{
		return (k);
	}
}
