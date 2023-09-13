#include "main.h"

/**
 *print_to_98 - function that print int for n to 98
 *@n: int value is n
 **/

void print_to_98(int n)
{
	int count;

	if  (n > 98)
		for (count = n; count >= 9; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
