#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac : int
 * @av : char
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, s;
	char *arg;

	s = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s++;
			j++;
		}
		s++;
		i++;
	}
	arg = malloc((sizeof(char) * s) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
