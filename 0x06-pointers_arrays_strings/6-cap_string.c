#include "main.h"

/**
 * cap_string - concatenates two strings
 * @s  : array
 * Return: a pointer to the resulting string
 **/

char *cap_string(char *s)
{

	int a, b;
	char str[] = {'\t', '\n', ' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] -= 32;
		}
		for (b = 0; b < 13; b++)
		{
			if (s[a] == str[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
