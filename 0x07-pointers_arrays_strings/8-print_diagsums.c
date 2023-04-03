#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of2 diags
 * @a: pointer to array
 * @size: obv
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][i];
		for (j = size - 1; j >= 0; j--)
		{
			sum2 = sum2 + a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}

