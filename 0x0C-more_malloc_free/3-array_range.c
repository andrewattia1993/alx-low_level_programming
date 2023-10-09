#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, len, i;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;

	ptr = (int *) malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = min++
	}
	return (ptr)
