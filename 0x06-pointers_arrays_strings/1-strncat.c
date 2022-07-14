#include "main.h"

/**
 * _strncat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 * @n: number of bytes to be copied
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLength = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		destLength++;
		counter++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';

	return (dest);
}
