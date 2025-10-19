/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:58:25 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 10:01:04 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes the contents of the size x size grid to output.
 * 
 * Loops through the rows and columns of the grid and writes it to output. 
 * 
 * @param grid 2D grid of size x size
 * @param size size (number of rows and columns)
 */
void	write_grid(int **grid, int size)
{
	int	row;
	int	column;

	row = 0;
	column = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			if (column != 0)
				write(1, " ", 1);
			write(1, &(char){grid[row][column] + '0'}, 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}
