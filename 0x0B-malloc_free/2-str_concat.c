#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, new_str_len, counter;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	new_str_len = (i + j) + 1;

	new_str = malloc(new_str_len);
	if (new_str == NULL)
		return (NULL);

	counter = 0;

	for (k = 0; k < i; k++)
	{
		new_str[counter] = s1[k];
		counter++;

	}
	for (k = 0; k < j; k++)
	{
		new_str[counter] = s2[k];
		counter++;
	}

	new_str[counter] = '\0';

	return (new_str);
}
