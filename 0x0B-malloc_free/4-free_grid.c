#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This frees a DAM space
 * @grid: This is the space to be freed
 * @height: This is the size of the pointer space
 *
 * Return: Null void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
