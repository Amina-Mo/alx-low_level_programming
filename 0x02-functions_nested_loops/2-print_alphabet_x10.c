#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet 10 times, followed by a new line
 *
 * Return: no return.
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}

