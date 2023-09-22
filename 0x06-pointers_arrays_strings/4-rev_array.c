#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @a  : array
 * @n : int
 * Return: a pointer to the resulting string
 **/

void reverse_array(int *a, int n)
{
	int l, i;
	char g[500];

	for (l = 0; s[l] != '\0'; l++)
		;
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
