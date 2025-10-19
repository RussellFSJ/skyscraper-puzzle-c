/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:58:34 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 09:59:44 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void	free_grid(int **grid, int size)
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
