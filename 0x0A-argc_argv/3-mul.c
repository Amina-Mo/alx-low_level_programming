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

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = argv[1] * argv[2];
	printf("%d", mult);
	return (0);
}

