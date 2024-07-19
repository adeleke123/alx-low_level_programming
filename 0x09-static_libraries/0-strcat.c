#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destLength = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		destLength++;
		counter++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';

	return (dest);
}
