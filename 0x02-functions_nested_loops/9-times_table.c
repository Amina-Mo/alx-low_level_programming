#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int line, colon, n;

	for (colon = 0; colon < 10; colon++)
	{
		for (line = 0; line < 10; line++)
		{
			n = line * colon;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

