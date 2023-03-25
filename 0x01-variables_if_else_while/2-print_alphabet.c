#include <stdio.h>
/**
 * main - print alphabets in lower case
 *
 * Return: on success 0.
 */
int main(void)
{
	int x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

