#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array of strings, commands
 * Return: on success 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

