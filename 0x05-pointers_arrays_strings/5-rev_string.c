#include "main.h"

/**
 * rev_string - check the code.
 * @s : string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int l, i;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i] + 0);
}
