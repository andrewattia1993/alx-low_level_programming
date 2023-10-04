#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates arryas
 * @c : charater
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(char) * size);

	if (str == 0 || size == 0)
		return (0);

	while (size--)
		str[size] = c;

	return (str);
}
