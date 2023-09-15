#include "main.h"

/**
 * print_diagonal - check the code
 * @n : intger input
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
