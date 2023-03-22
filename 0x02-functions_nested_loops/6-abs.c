#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 *@a: The number to get the absolute value from
 *
 *Return: void
 */
int _abs(int a)
{
	int abs = 0;

	if (a < 0)
	{
		abs = -a;
	}
	else
	{
		abs = a;
	}
	return (abs);
}

