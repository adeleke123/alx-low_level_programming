#include "main.h"

/**
 * string_toupper - Changes any lowercase letter
 * in a string to uppercase
 * @n: The string to check
 *
 * Return: The uppercased string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		else
			continue;
	}

	return (n);
}
