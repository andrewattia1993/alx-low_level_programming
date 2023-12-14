#include "main.h"

/**
 * _strlen - check the code.
 * @s: char to be enetered
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
