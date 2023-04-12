#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr++ = *src++;
	}
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (dest);
}

