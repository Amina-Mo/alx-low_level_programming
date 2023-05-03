#include <stdio.h>
/**
 * print_name - prints name
 * @name: name
 * @f: func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

