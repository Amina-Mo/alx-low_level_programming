#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp[n];
	int i = 0;
	int j = 0;

	while (i < n)
	{
		tmp[i] = a[i];
	}

	while (i >= 0)
	{
		a[j] = tmp[i];
		i--;
		j++;
	}
}

