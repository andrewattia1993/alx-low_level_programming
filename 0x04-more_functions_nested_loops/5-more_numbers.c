#include "main.h"

/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: nothing.
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			j = c;
			if (c > 10)
			{
				_putchar(1 + '0');
				j = c % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
