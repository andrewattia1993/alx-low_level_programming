#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1 = 0, digit2 = 0;

	while (digit1 <= 9)
	{
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar (digit1 + 48);
				putchar (digit2 + 48);
					if (digit1 + digit2 != 17)
					{
						putchar (' ');
						putchar (',');
					}
			}
			digit2++;
		}
		digit1++;
	}
	putchar ('\n');
	return (0);
}
