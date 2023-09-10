#include <stdio.h>

/**
 *main - prints the alphabet in lowercase,
 *followed by a new line
 * Return: Always 1 (Success)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (quo[i] != '\0')
	{
		putchar(quo[i]);
		i++;
	}
	return (1);
}
