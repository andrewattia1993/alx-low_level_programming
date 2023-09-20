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

	char g[500];

	for (i = l - 1; i >= 0; i--)
	{
		g[(l - 1) - i] = s[i];

	}
	g[l] = s[l];
	for (i = 0; i <= l  ; i++)
	{
		s[i] = g[i];
	}
}
