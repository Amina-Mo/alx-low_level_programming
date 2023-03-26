#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: on success 0.
 */
int main(void)
{
	int i;

	for (i = 2; i < 50; i++)
	{
		i = i + i - 1;
		printf("%d", i);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

