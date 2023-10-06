#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that gets the length of a prefix substring
 * @s: char
 * @accept : char
 * Return: length
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\n'; b++)
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return ('\0');
}
