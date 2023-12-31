#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1  : array
 * @s2 : array
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			a = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (a);
}
