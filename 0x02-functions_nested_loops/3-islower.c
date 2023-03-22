#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * Return: on success 1
 * otherwaise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

