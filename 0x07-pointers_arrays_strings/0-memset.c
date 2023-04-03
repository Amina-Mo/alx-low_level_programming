#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer
 * @b: value
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **ptr = &s;
	char **ps = &s;
	int i;

	for (i = 0; i < n ; i++)
	{
		ptr[i] = b;
	}
	return (ps);
}

