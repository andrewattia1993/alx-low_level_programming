#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *neu;
	int size1, size2, a;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
		{
		}
	}

	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
		{
		}
	}
	neu = (char *) malloc(size1 + size2 + 1);
	if (neu == NULL)
		return (NULL);
	for (a = 0; a < size1; a++)
	{
		neu[a] = s1[a];
	}
	for (a = 0; a < size2; a++)
	{
		neu[size1 + a] = s2[a];
	}
	neu[size1 + size2 + 1] = '\0';
	return (neu);
}
