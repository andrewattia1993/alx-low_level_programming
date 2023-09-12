#include "main.h"
#include <stdio.h>
/**
 * print_sign - print signs according to number value
 * Return: 1 if n is greater than zero,
 * 0 f n is zero , -1 if n is less than zero
 * @n: the integer to check 
 */

int print_sign(int n)
{
	if (n > 0)
		printf("+");
		return (1);
	else if (n == 0)
		printf("0");
		return (o);
	else if (n < 0)
		printf("-");
		return (-1);
	return (0);
}
