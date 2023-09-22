#include "main.h"

/**
 * leet - function that switch char to letter
 * @str : array
 * Return: the resulting string;
 */

char *leet(char *str)
{
	int a, b;

	char *x = "aAeEoOtTlL"
	char *z = "4433007711"

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = z[b];
			}
		}
	}
	return (str);
}
