#include <stdio.h>
/**
 * main - prints alphabets execpt q and e
 *
 * Return: on success 0.
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

