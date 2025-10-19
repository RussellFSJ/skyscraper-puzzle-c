/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:58:44 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 18:39:26 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_valid_input(char *input, int size);
int		**allocate_grid(int size);
void	free_grid(int **grid, int size);
int		**parse_clues(const char *input, int size, int **grid);
void	write_grid(int **grid, int size);
int		solve(int **grid, int pos, int size, int **clues);

int	main(int argc, char *argv[])
{
	int	**clues;
	int	**solution;
	int size; 

	size = 4;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!is_valid_input(argv[1], 4))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	clues = allocate_grid(4);
	solution = allocate_grid(4);
	parse_clues(argv[1], 4, clues);
	// write_grid(clues, 4);
	//testing begins here
	solve(solution, 0, size, clues);
	write_grid(solution, size);
	return (0);
}
