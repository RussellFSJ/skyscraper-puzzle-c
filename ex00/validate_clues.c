/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_clues.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:23:43 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 14:48:09 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int *line, int size);
int	*reverse_line(int *line, int size);

int	validate_clues(int **grid, int **clues, int size)
{
	int	i;
	int	j;
	int *row;
	int *rev;

	i = 0;
    while (i < size) {
        j = 0;
        while (j < size) {
            row[j] = grid[i][j];
            j++;
        }
        if (count_visible(row, size) != clues[2][i]) 
			return (0);
        j = 0;
		rev = reverse_line(row, size);
        while (j < 4) {
            rev = row[size - 1 - j];
            j++;
        }
        if (count_visible(rev, size) != clues[3][i]) 
			return (0);
        j = 0;
        while (j < 4) {
            row[j] = grid[j][i];
            j++;
        }
        j = 0;
        while (j < 4) {
            rev[j] = row[4 - 1 - j];
            j++;
        }
        if (count_visible(row, size) != clues[0][i]) 
			return 0;
        if (count_visible(rev, size) != clues[1][i])
			return 0;
        i++;
    }
    return 1;
}

int	validate_clue(int *row, int clue, int size)
{
	int	index;
	
	index = 0;
	while (index < size)
	{
		if (count_visible(row, size) != clue)
			return (0);
		index++;
	}
	return (1);
}