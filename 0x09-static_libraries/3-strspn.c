#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: char
 * @accept : char
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, f;

	f = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\n'; b++)
		{
			if (accept[b] == s[a])
			{
				f++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (f);
		}
	}
	return (f);
}
