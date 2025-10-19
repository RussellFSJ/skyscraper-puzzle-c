/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_column_unique.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:33:17 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 11:59:17 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the value at cell is unique in its column.
 * 
 * @param grid 2D grid of size x size
 * @param size Number of rows and columns
 * @param column Column number of cell
 * @param value Value at cell
 * @return int 1 if value at cell is unique in its row, 0 otherwise
 */
int	is_column_unique(int **grid, int size, int column, int value)
{
	int	index;

	index = 0;
	while (index < size)
	{
		if (grid[index][column] == value)
			return (0);
		index++;
	}
	return (1);
}
