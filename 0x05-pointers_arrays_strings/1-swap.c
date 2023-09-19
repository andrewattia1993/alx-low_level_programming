#include "main.h"

/**
 * swap_int - check the code.
 * @a: int to be swaped
 * @b: int to be swaped with a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
