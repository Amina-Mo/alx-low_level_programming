#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: nmemb
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	result = malloc(nmemb * size);
	if (result != NULL)
	{
		memset(result, 0, nmemb * size);
	}
	return (result);
}

