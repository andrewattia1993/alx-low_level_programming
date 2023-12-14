#include "main.h"

/**
 * _memset - is used to fill a block of memory with a particular value.
 * @s : Starting address of memory to be filled
 * @b : Value to be filled
 * @n : Number of bytes to be filled starting from s to be filled
 * Return: all the above
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
	{
	s[a] = b;
	}
	return (s);
}
