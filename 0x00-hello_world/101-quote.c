#include <unistd.h>
/**
 * main - prints a statement
 *
 * Return: on success 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(STDERR_FILENO, message, 40);
	return (1);
}

