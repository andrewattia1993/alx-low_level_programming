#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest  : array
 * @src : array
 * @n : int
 * Return: a pointer to the resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];

	return (dest);
}
