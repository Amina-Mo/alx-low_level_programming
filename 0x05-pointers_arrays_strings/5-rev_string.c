#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

