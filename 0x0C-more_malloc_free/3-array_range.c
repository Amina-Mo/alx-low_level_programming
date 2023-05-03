#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: int
 */
int *array_range(int min, int max)
{
	int size;
	int *result;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	result = (int *) malloc(size * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		result[i] = min + i;
	}
	return (result);
}

