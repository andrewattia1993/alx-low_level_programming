#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code.
 * @str : string
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l <= n; l++)
	{
		if (l != (n - 1))
			printf("%d ,", a[l]);
		else 
			printf("%d", a[l]);
	}
	printf("\n");
}
