#include "main.h"

/**
 * lower - determines that characters are lower case
 * @c  : charater to be determined
 * Return: 1 if true 0 is false
 **/

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - function that checks if ascii is a delimiter
 * @c: charcter to be determined
 * Return: return is 1 if true 0 is false
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = ",;.!?\"\n\t(){}"

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - concatenates two strings
 * @s  : array
 * Return: a pointer to the resulting string
 **/

char *cap_string(char *s)
{
	char *p = s;
	int founddelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddeleimit = 1;
		else if (lower(*s) && founddelimit)
		{
			*s -= 32;
			founddelimit = 0;
		}
		else
			founddelimit = 0;
		s++;
	}
	return (p);
}











