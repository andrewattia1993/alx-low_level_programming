#include "main.h"

/**
 * leet - function that switch char to letter
 * @str : array
 * Return: the resulting string;
 */

char *leet(char *s)
{
	int i, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k < 10; k++)
		{
			if (s[i] == a[k])
			{
				s[i] = b[k];
			}
		}
	}

	return (s);
}
