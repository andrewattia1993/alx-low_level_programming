#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest  : array
 * @src : array
 * Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a++] = src[b];

	return (dest);
}
