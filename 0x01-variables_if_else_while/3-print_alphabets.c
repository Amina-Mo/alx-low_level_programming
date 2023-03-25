#include <stdio.h>
/**
 * main - prints alphabet lowercase and uppercase
 *
 * Return: on success 0.
 */
int main(void)
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

