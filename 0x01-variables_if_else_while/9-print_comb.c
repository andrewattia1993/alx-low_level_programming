#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar (' ');
	}
	putchar (57);
	putchar('\n');
	return (0);
}
