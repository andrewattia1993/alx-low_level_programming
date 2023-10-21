#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * print_list - function that prints all the elements of a list_t.
 * @h: pointer to the list.
 *
 * if str is NULL print [0] (nil).
 * You are allowed to use printf.
 *
 * Return: the number of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h);
{
	size_t i = 0;
	while(h)
	{
		printf("[%d] %s\n", _strlen(h->str). h->str ? h->str: "(nill)"  );
		h = h->next;
		i++;
	}
	return (1);
}


