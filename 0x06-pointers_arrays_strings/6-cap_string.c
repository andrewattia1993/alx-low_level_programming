#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str  : array
 * Return: a pointer to the resulting string
 **/

char *cap_string(char *str)
{
	int l, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (l = 0; s[i] != '\0'; l++)
	{
		if (l == 0 && s[l] >= 'a' && s[l] <= 'z')
			s[l] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[l] == spe[l])
			{
				if (s[l + 1] >= 'a' && s[l + 1] <= 'z')
				{
					s[l + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
