/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:58:47 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 10:02:11 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str);

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
