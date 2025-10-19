/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_row_unique.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:33:17 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 11:59:12 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the value at cell is unique in its row
 * 
 * @param grid 2D grid of size x size
 * @param size Number of rows and columns
 * @param row Row number of cell
 * @param value Value at cell
 * @return int 1 if value at cell is unique in its row, 0 otherwise
 */
int	is_row_unique(int **grid, int size, int row, int value)
{
	int	index;

	index = 0;
	while (index < size)
	{
		if (grid[row][index] == value)
			return (0);
		index++;
	}
	return (1);
}
