#include <unistd.h>

int	is_validate_input(char *input, int size);
int **allocate_grid(int size);
void free_grid(int **grid, int size);


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	return (0);
}
