#include <stdio.h>

/**
 * main - prints the range 0-14 ten times.
 * Return: nothing.
 */

 int main(void)
 {
 	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
		printf ("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf ("Buzz");
	}
	else if (i % 3 == 0 && i % 5 ==0)
	{
		printf ("FizzBuzz");
	}
	else 
	{
		printf ("%d ", i);
	}

	return (0);
}
