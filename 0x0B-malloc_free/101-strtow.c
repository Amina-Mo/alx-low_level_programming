#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer
 */
char **strtow(char *str)
{
	char **words;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		if (*str = " ")
		{
			str++;
		}
		while (*str != " ")
		{
			l++;
		}
		w++;
		str++;
	}
	words = malloc(w * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < w; i++)
	{
		words[i] = (char *) malloc((l+1) * sizeof(char));
		if (
