#include "main.h"

/**
 * print_diagsums - function that prints a diagonal
 * @a : int
 * @size : int 
 * Return: void
 */

void print_diagsums(int *a, int size)
{ 
	int i, j;
	int sum = 0; sum2 = 0;

	for (i = 0; i <= size; i++)
	{       
		for (j = 0; j <= size; j++)

			sum += a[i][j]  
