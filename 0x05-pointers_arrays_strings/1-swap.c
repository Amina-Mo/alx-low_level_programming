#include "main.h"
/**
 * main - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *tmp = 0;
	
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

