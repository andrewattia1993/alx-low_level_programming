#include <stdio.h>

/**
 * main - draws a diagonal line across (n) terminal lines.
 * Return: zero is the return
 */

int main(void)
{
	int i, c;

	long int n = 612852475143;

	while (n % 2 == 0)
	{
		c = 2;
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			c = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("%d\n", c);
	}
	return (0);
}

