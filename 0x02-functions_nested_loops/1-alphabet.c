#include "main.h"
/**
 * print_alphabet - prints all the alphabets in lowercase
 *
 * Return: on seccess 0
 * on error any other number
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

