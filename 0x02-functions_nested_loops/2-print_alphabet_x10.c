#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * from 0 to 10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ch, line;
	for (line = 0; line <= 9; line ++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
