#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			j = c;
			if (c > 9)
			{
				_putchar(1 + '0');
				j = c % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
