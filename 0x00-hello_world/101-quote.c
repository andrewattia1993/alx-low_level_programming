#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char phrase[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (int i = 0; phrase[i] != '\0'; i++)
		putchar(phrase[i]);

	return (0);
}

