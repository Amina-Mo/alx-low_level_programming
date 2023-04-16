#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: nb args
 * @argv: args
 * Return: on success 0
 */
int main(int argc, char **argv)
{
	int tmp;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	tmp = atoi(argv[1]) / 25;
	coins = atoi(argv[1]) % 25;
	tmp = tmp + coins / 10;
	coins = coins % 10;
	tmp = tmp + coins / 5;
	coins = coins % 5;
	tmp = tmp + coins / 2;
	coins = coins % 2;
	tmp = tmp + coins / 1;
	printf("%d\n", tmp);
	return (0);
}

