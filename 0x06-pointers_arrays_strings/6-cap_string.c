#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str  : array
 * Return: a pointer to the resulting string
 **/

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			str[a] = str[a] + 32;
		}
	}
	return (str);
}
