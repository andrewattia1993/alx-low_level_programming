#include "main.h"
#include <stdio.h>

/**
 * _strstr - unction finds the first occurrence of the substring
 * @haystack : char
 * @needle : char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
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
