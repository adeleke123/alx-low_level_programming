#include "main.h"

/**
 * rot13 - This implements the rot13 cipher algorithm
 * @s: This is the string to be ciphered
 *
 * Return: The ciphered string
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = cipher[j];
				break;
			}
		}
	}

	return (s);
}
