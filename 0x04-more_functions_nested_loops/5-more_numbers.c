#include "main.h"
/**
 * more_numbers - prints 10x 0-9
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

