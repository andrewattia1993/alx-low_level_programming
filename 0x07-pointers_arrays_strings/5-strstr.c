#include "main.h"
#include <stdio.h>

/**
 * _strstr - unction finds the first occurrence of the substring
 * @haystack : char
 * @needle : char
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	b = 0;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[b])
		{
			if (needle[b + 1] == '\0')
			{
				return (needle);
			}
			b++;
		}
		else
			b = 0;
	}
	return ("");
}
