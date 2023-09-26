#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string s
 * @c: char c
 * Return: the value
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (c == s[a])
			return (&(s[a]));

	}
	return ('\0');
}

