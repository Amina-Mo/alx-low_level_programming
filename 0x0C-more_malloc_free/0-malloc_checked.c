#include "main.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: mem size
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		return (void *) (98);
	}
	return (ptr);
}

