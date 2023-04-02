#include "main.h"
/**
 * cap_string - capetalizes words
 * @str: string
 * Return: pointer
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}

