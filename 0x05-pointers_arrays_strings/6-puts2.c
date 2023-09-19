#include "main.h"

/**
 * puts2 - check the code
 * @str : string that is inside the array
 * retutn: zero as always
 */

void puts2(char *str)
{
	char c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
