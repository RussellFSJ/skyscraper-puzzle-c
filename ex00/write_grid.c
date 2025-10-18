#include <unistd.h>

void	write_grid(int **grid, int size)
{
	int row;
	int column;

	row = 0;
	column = 0;
	while (row < size)
	{	
		column = 0;
		while (column < size)
		{
			if (column != 0)
				write(1, " ", 1);
			write(1, &(char){grid[row][column] + '0'}, 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}