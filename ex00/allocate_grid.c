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
