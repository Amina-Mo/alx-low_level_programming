#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
	char *tmp = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (s >= tmp)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

