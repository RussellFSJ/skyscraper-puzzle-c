/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ltan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:33:52 by yi-ltan           #+#    #+#             */
/*   Updated: 2025/10/19 17:27:31 by yi-ltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file solve.c
 * @author your name (you@domain.com)
 * @brief recursively checks current cell against clues and unique row and col
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int	check_no_repeats(int **grid, int size, int row, int col);
int	validate_clues(int **grid, int **clues, int size);

int	solve(int **grid, int pos, int size, int **clues)
{
	int	digit;
	int	row;
	int	col;
	int	isunique;

	if (pos == size * size)
		return (1);
	row = pos / size;
	col = pos % size;
	digit = 1;
	while (digit <= size)
	{
		isunique = check_no_repeats(grid, size, pos, digit);
		grid[row][col] = digit;
		if (isunique && validate_clues(grid, clues, size))
		{
			if (solve(grid, pos + 1, size, clues))
				return (1);
		}
		grid[row][col] = 0;
		digit ++;
	}
	return (0);
}
