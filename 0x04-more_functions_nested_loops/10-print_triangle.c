#include "main.h"

/**
 * print_triangle - check the code
 * @size : intger input
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j > i; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
