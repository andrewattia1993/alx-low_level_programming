#include "main.h"

/**
 * _strcat - function that is replica to starcat
 * @dest  : array
 * @src : array
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
