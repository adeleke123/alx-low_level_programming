#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and assigns it values
 * @size: This is the size of the array
 * @c: This is the char it should be filled with
 *
 * Return: Null if no memory or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	i = 0;
	a = malloc(sizeof(c) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
