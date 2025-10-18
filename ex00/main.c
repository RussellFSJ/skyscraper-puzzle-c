#include <unistd.h>
#include <stdio.h>

int	is_valid_input(char *input, int size);
int **allocate_grid(int size);
void free_grid(int **grid, int size);
int	**parse_clues(const char *input, int size, int **grid);
void	write_grid(int **grid, int size);


int main(int argc, char *argv[])
{
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

	int **clues;
	int **solution;

	clues =	allocate_grid(4);
	solution = allocate_grid(4);
	parse_clues(argv[1], 4, clues);
	write_grid(clues, 4);
	return (0);
}
