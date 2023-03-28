#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char *tmp = s;
	char *stop = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (s != stop)
	{
		*s = *tmp;
		s--;
		tmp++;
	}
}

