#include "main.h"
/**
 * factorial - factorial n
 * @n: number
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}

