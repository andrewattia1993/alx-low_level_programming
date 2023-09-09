#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);

		if (n != 9)
		{
			putchar(',');
			putchar (' ');
		}
	n++;
	}
	putchar ('\n');
	return (0);
}
