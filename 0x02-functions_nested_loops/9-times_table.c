#include "main.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((n * m) + '0');
			_putchar((',') + '0');
			_putchar(' ');
			_putchar('\n');
		}
		
	}
}
