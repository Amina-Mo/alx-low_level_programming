#include <stdio.h>
/**
 * main - print numbers of base 16
 *
 * Return: on success 0
 */
int main(void)
{
	int  i, j;
	char hex[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char hexa[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

	for (i = 0; i < 10; i++) 
	{
		putchar(hex[i]);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(hex[j]);
	}
	putchar('\n');
	return (0);
}

