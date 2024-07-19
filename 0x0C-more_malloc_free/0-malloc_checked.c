#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocating memory
 * @b: This is the number of bytes to be malloced
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
