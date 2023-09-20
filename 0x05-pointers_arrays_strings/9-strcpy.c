#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code.
 * @dest : string
 * @src : intger inside the array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (l != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
