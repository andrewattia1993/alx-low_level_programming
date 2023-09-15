#include <stdio.h>
#include <math.h>

/**
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to print
 */

int main(void)
 {
 	int n, i;

 	while (n % 2 == 0)
	{
		printf("2");
		n = n / 2;
	}
	for (i = 3; i <= sqt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%d", n);
	}
	return (0);
}

