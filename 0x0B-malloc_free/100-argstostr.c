#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the string of arguments
 * @ac: This is argument count
 * @av: This is argument vector
 *
 * Return: A new string if successful, Null if otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, counter;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	counter = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}

	}
	size = size + (ac + 1);
	str = malloc(size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[counter] = av[i][j];
			counter++;
		}
		str[counter] = '\n';
		counter++;
	}
	str[counter] = '\0';

	return (str);
}
