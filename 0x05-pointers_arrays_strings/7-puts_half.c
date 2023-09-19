#include "main.h"

/**
 * _puts - check the code.
 * @str : string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int l, i, n;

	for (l = 0; str[l] != '\0'; l++)
		;

	for (i = l / 2; str[i] != '\0', i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
