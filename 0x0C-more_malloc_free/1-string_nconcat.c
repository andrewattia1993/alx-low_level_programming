#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, lens1, lens2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (lens1 = 0; lens1 != '\0'; lens1++)
		;
	for (lens2 = 0; lens2 != '\0'; lens2++)
		;
	str = malloc(lens1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lens1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < lens2; i++)
	{
		str[lens1 + i] = s2[i];
	}
	str[lens1 + lens2 + 1] = '\0';
	return (str);
}
