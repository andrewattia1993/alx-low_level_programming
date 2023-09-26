#include "main.h"

/**
 * _strstr - unction finds the first occurrence of the substring
 * @haystack : char 
 * @needle : char
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] == needle [b])
				reutn &haystack[a]
		}
	}
}
