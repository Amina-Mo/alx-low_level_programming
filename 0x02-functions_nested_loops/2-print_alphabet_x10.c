#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet 10 times, followed by a new line
 *
 * Return: no return.
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char a = 'a';

	while (n <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}

