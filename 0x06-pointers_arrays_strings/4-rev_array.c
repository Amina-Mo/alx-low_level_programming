#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

