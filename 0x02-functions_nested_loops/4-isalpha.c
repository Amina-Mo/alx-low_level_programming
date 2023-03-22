#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to check
 *
 * Return: on success 1
 * otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

