#include "main.h"

/**
 * _abs -  function that gets the absoulte for an intger
 * @n: n is a intger taht is an input for function
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
