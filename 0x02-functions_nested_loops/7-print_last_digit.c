#include "main.h"
/**
 * print_last_digit - prints the last digit of a number n
 * @n: the number the get the last digit of
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

