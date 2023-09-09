#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
