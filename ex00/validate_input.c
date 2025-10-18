int	ft_atoi(const char *str);

/**
 * @brief Validates if the given input is valid or not with respect to size. 
 * 
 * Input is considered invalid if there are:
 * - non digit characters
 * - digit inputs that are greater than the size of the grid 
 * - less/more digit inputs than size x size
 * 
 * @param input String input from command line argument.
 * @param size Size of the 2D grid.
 * @return int 1 if valid, 0 otherwise. 
 */
int	is_validate_input(char *input, int size)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (input[index] != '\0')
	{
		if (input[index] != ' ')
		{
			if (ft_atoi(&input[index]) == 0 || ft_atoi(&input[index]) > size)
				return 0;
			count++;
		}
		index++;
	}
	if (count != size * size)
		return 0;
	return 1;
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", is_validate_input("21 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", 4));
// 	printf("%d\n", is_validate_input("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", 4));

// 	return 0;
// }