#include "main.h"

/**
 * string_toupper - concatenates two strings
 * @str  : array
 * Return: a pointer to the resulting string
 **/

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
