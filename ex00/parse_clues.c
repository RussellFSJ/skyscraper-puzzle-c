/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:58:47 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 10:23:10 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str);

/**
 * @brief Parse clues into clue grid to separate them into their rows 
 * and columns.
 * 
 * For a 4 x 4 input, clues will be parsed into a 4 x 4 grid for
 * clue to be used later. 
 * 
 * "col1top col2top col3top col4top 
 * col1bottom col2bottom col3bottom col4bottom 
 * row1left row2left row3left row4left 
 * row1right row2right row3right row4right"
 * 
 * @param input Validated input from command line argument.
 * @param size Number of rows and columns.
 * @param grid 2D grid of size x size.
 * @return int** 2D grid.
 */
int	**parse_clues(const char *input, int size, int **grid)
{
	int	index;
	int	row;
	int	column;

	index = 0;
	row = 0;
	column = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			if (input[index] == ' ')
				index++;
			if (input[index] == '\0')
				return (grid);
			grid[row][column] = ft_atoi(&input[index]);
			while (input[index] != '\0' && input[index] != ' ')
				index++;
			column++;
		}
		row++;
	}
	return (grid);
}
