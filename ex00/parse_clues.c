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
				return grid;
			grid[row][column] = ft_atoi(&input[index]);

			while (input[index] != '\0' && input[index] != ' ')
				index++;
			column++;
		}
		row++;
	}	
	return grid;
}