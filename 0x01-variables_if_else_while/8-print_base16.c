#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * descreption: alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int a = 0;

	while (a < 10);
	{
		putchar (a + '0');
		a++;
	}
	while (ch <= 'f')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
