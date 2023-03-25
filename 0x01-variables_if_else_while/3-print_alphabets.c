#include <stdio.h>
/**
 * main - prints alphabet lowercase and uppercase
 *
 * Return: void
 */
void main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}

