#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 99)
	{
		digit2 = 0;
		while (digit2 <= 99)
		{
			if (digit2 != digit1)
			{
				putchar ((digit1 / 10) + 48);
				putchar ((digit2 % 10) + 48);
				putchar (' ');
				putchar ((digit2 / 10) + 48);
				putchar ((digit2 % 10) + 48);
				if (digit1 != 99 || digit2 != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar ('\n');
	return (0);
}
