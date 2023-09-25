#include "main.h"

/**
 * _memcpy -  function that copies n bytes from memory area src
 * @dest : pointer
 * @src : char
 * @n : number of charecters
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
	{
		dest[a] = *src;
	}
	return (dest);
}
