#include "main.h"

/**
 * _strcmp - This compares two strings
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: An int, 0 if equal, +ve is 1 > 2
 * -ve if 1 < 2
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, count2 = 0;

	while (count == 0)
	{
		if ((*(s1 + count2) == '\0') && (*(s2 + count2) == '\0'))
			break;
		count = *(s1 + count2) - *(s2 + count2);
		count2++;
	}

	return (count);
}
