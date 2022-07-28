#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a block of memory to expand it
 * @ptr: Previous memory pointer
 * @old_size: The former size of the memory
 * @new_size: The new size to be allocated to this memory
 *
 * Return: Void Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (nptr);
}
