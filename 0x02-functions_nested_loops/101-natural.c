#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * from 0 to 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s;

	for (n = 0; n <= 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);
	return (0);
}
