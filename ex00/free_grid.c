#include <stdlib.h>

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
