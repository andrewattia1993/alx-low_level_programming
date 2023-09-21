#include "main.h"

/**
 * _strncat - function that is replica to starcat
 * @dest  : array
 * @src : array
 * @n : int
 */

char *_strncat(char *dest, char *src, int n)
	int a, b;

	a = 0;

	while (dest[a])
		a++;
	
	for (b = 0; src[b]; b++)
		dest[a++] = src[b];

	return (dest);
}
