#include "main.h"
#include <stdio.h>

/**
 * _strstr - unction finds the first occurrence of the substring
 * @haystack : char
 * @needle : char
 */
int con(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && con(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return ("");
}

