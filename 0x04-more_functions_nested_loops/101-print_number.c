#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	long num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
