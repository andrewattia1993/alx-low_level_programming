#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code.
 * @a : string
 * @n : intger inside the array
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != (n - 1))
			printf("%d ,", a[l]);
		else 
			printf("%d", a[l]);
	}
	printf("\n");
}
