#include "main.h"

/**
 * puts_half - check the code.
 * @str : string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	l--;

	if (l % 2 ==  0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (l - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
