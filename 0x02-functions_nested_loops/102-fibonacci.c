#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * from 0 to 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long a, b, e;

	for (count = 0, count < 50, count++)
	{
		e = a + b;
		printf("%lu", e);

		a = b;
		b = e;

		if (count <= 49)
			printf("/n");
		else
			printf(", ");
	}
	return (0);
}

