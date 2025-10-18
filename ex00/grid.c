#include <stdlib.h>

/**
 * @brief Dynamically allocates memory for a size x size 2D grid.
 * 
 * For example, a 2D grid of size 4 x 4 is created by allocating
 * 1 block of memory for an array of 4 integer pointers each pointing to
 * 1 block of memory for an array of 4 integers.
 *   
 * @param size Size of the grid (number of rows and columns)
 * @return int** Pointer to the allocated 2D grid
 */
int **allocate_grid(int size)
{
	int **grid;
	int index;

	index = 0;
	grid = malloc(size * sizeof(int *));

	while (index < size)
	{
		grid[index] = malloc(size * sizeof(int));
		index++;
	}
	return grid;
}

/**
 * @brief Frees memory allocated for a size x size 2D grid.
 * 
 * Frees each memory block for storing the array of integers before
 * freeing the memory block for storing the array of integer pointers.
 * 
 * @param grid Pointer to the allocated 2D grid
 * @param size Size of the grid (number of rows and columns)
 */
void free_grid(int **grid, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}