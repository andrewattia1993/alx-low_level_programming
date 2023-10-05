#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string a duplicate of the string str
 * @str: string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	int a, size;
	char *ptr;

	a = 0, size = 0;

	if (str == 0)
		return (NULL);

	for (; str[size] != '\0'; size++);

	ptr = (char*) malloc(size + 1);

	for (a = 0; a <= size; a++)
		ptr[a] = str[a];
	return (ptr);
}
