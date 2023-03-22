#include "main.h"
/**
 * _islower - checks if the character c is lowercase
 *@c: The character to check
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

