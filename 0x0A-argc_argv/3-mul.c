#include <stdio.h>
#include <stdlib.h>

/**
 * main - the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int mul;

	if (argc < 3 || argc < 3)
		printf("Error");
		return (1);
	else 
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n");
	return (0);
}
