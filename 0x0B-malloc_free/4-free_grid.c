#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @height: int
 * @grid: double pointer
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
