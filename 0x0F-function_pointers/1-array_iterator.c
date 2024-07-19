#include "function_pointers.h"

/**
 * array_iterator - Applies function to an array of items
 * @array: This is the array of ints
 * @size: This is the size of the array
 * @action: This is the pointer to the function to be applied
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
