/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_clues.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:23:43 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 19:12:13 by yi-ltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_vis(int *line, int size);
void	reverse_line(int *src, int *dest, int size);
void	copy_row(int **grid, int row_index, int *dest, int size);
void	copy_col(int **grid, int col_index, int *dest, int size);
int		line_complete(int *line, int size);

static int	check_line(int *line, int *rev, int clues[2], int size)
{
	reverse_line(line, rev, size);
	if (count_vis(line, size) != clues[0] || count_vis(rev, size) != clues[1])
		return (0);
	return (1);
}

int	validate_clues(int **grid, int **clues, int size)
{
	int	i;
	int	*row;
	int	*rev;
	int	l_clues[2];

	row = (int *)malloc(size * sizeof(int));
	rev = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		copy_row(grid, i, row, size);
		l_clues[0] = clues[2][i];
		l_clues[1] = clues[3][i];
		if (line_complete(row, size) && !check_line(row, rev, l_clues, size))
			return (free(row), free(rev), 0);
		copy_col(grid, i, row, size);
		l_clues[0] = clues[0][i];
		l_clues[1] = clues[1][i];
		if (line_complete(row, size) && !check_line(row, rev, l_clues, size))
			return (free(row), free(rev), 0);
		i++;
	}
	return (free(row), free(rev), 1);
}
