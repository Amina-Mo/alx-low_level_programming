#include "main.h"
/**
 * *_strcpy - copies to another buffer
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		src++;
		dest_ptr++;
	}
	*dest_ptr = '\0';
	return (dest);
}

