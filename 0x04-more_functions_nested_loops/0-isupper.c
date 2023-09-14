#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 65 && c <= 90)
		return (10);
}
