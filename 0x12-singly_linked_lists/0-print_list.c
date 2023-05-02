#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const size_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		cnt++;
		h = h->next;
	}
	return cnt;
}

