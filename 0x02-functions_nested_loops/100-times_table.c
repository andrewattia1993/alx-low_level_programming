#include "main.h"

/**
 * times_table - Entry point
 * @n: input of an int
 */

void times_table(int n)
{
	int v, t, e;

	if (n <= 15 && n >= 0)
	{
		for (v = 0; v <= 15; v++)
		{
			_putchar(48);
			for (t = 1; t <= n; t++)
			{
				_putchar(',');
				_putchar(' ');
				e = v * t;
				if (e <= 9)
				{
					_putchar(' ');
				}
				if (e <= 99)
				{
					_putchar(' ');
				}
				if (e <= 100)
				{
					_putchar((e / 100) + '0');
					_putchar((e / 10) + '0'0;
				}
				else if (e <= 99 && e >= 9)
					_putchar(e / 10 + '0');
				_putchar(e % 10 + '0');
			}
			_putchar ('\n');
		}
	}
}
