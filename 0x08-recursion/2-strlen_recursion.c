#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

