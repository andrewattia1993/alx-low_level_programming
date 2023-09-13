#include "main.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int n, t, e;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (t = 0; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');
			e = n * t;
			if (e <= 9)
				_putchar(' ');
			else
			{
				_putchar(e / 10 + '0');
				_putchar(e % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
