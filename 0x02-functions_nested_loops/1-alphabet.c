#include "main.h"

/**
 * main - Entry point
 * from 0 to 10
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
