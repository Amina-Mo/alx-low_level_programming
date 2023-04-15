#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed
 * @argc: number of args
 * @argv: array of args
 * Return: on success 0
 */
int main(int argc, char **argv)
{
	int count = 0;

	(void)argv;
	while (argc--)
	{
		count++;
	}
	printf("%d", count);
	return (0);
}

