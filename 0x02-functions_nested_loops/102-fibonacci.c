#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: on success 0.
 */
int main(void)
{
	int i;
	int Fibonacci = 0;

	for (i = 2; i <= 52; i++)
	{
		Fibonacci = i + i - 1;
		printf("%d", Fibonacci);
		if (i < 52)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

