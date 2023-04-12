#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*ptr++ = *src++;
	}
	return (dest);
}

