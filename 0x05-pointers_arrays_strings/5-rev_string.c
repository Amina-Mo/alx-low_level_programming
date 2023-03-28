#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char tmp[] = *s;
	char *stop = s;
	int i = 0;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (s != stop)
	{
		*s = tmp[i];
		i++;
		s--;
		tmp++;
	}
}

