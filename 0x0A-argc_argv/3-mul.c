#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: nb args
 * @argv: agrs
 * Return : on success 0
 * else 1
 */
int main(int argc, char **argv)
{
	int mult = 0;
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
	return (0);
}

