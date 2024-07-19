#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new string that duplicate the string
 * @str: string to be copied
 *
 * Return: Pointer to the string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
