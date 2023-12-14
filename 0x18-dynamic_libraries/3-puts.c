#include "main.h"

/**
 * _puts - check the code.
 * @str : string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int v;

	for (v = 0; str[v] != '\0'; v++)
	{
		_putchar(str[v]);
	}
	_putchar('\n');
}
