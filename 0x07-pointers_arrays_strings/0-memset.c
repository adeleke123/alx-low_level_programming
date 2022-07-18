#include "main.h"

/**
 * _memset - Fills a buffer with a constant for a specified size
 * @s: This is the buffer to be filled
 * @b: This is the char that will be used to fill buffer
 * @n: This is the no of bytes to fill in the memory array of s
 *
 * Return: a pointer to s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
