/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:49:22 by yi-ltan           #+#    #+#             */
/*   Updated: 2025/10/19 17:34:07 by yi-ltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file validate_line.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 * @brief Checks if value is unique in row and column
 * @param grid 2D grid of size x size
 * @param size Number of rows/column
 * @param cell_pos Index of cell position
 * @param value value of cell
 * @return int 1 if value at cell is unique in its row + column, 0 if not 
 */

int	is_row_unique(int **grid, int size, int row, int value);
int	is_column_unique(int **grid, int size, int column, int value);

int	check_no_repeats(int **grid, int size, int pointer, int value)
{
	int	row;
	int	col;
	int	row_c;
	int	col_c;

	row = pointer / 4;
	col = pointer % 4;
	row_c = is_row_unique(grid, size, row, value);
	col_c = is_column_unique(grid, size, col, value);
	if (row_c && col_c)
		return (1);
	else
		return (0);
}
