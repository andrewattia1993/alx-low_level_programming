#include "main.h"

/**
 * rot13 - function that decodes
 * @s : char to be encoded
 * Return: char to be returned s
 */

char *rot13(char *s)
{
	int i, j;

	char *rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] < 52; j++)
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[j];
				break;
			}
		}
	}
	return (s);
}
