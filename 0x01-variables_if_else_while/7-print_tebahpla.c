#include <stdio.h>
/**
 * main - prints alphabets in reverse
 *
 * Return: on success 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

