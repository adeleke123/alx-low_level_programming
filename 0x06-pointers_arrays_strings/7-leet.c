#include "main.h"

/**
 * leet - Converts to leet format
 * @s: This is the string to be converted
 *
 * Return: The formatted string
 */
char *leet(char *s)
{
	char options[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if ((s[i] == options[j] || s[i] == (options[j] + 32)))
				s[i] = options[j + 1];
		}
	}

	return (s);
}
