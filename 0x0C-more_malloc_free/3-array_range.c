#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of ints from a min no to max no
 * @min: lower bound
 * @max: Upper bound
 *
 * Return: An integer pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i, j;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; j++, i++)
		ptr[j] = i;

	return (ptr);
}
