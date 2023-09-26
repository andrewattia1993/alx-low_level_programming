#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: char
 * @accept : char
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a,b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0', b++)
		{
			if (accept [b] == s[a])
			{
				return (a);
			}
		}
	}
	return (0);
}
