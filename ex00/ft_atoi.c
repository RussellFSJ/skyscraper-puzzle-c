#include <unistd.h>

/**
 * @brief Converts integer string to integer.
 * 
 * Removes whitespaces and handles string preceded by an arbitrary number of ‘+’ and ‘-’
 * and handles the sign according to number of '-'. (Excludes min integer.)
 * Stops when it reads a non digit.
 * 
 * @param str Integer string
 * @return int Integer
 */
int	ft_atoi(const char *str)
{
	int index;
	int sign;
	int integer;

	index = 0;
	sign = 1;
	integer = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
        index++;

	while (str[index] == '-' || str[index] == '+')
    {
        if (str[index] == '-')
            sign *= -1;
        index++;
    }

	while (str[index] >= '0' && str[index] <= '9')
    {
        integer = integer * 10 + (str[index] - '0');
        index++;
    }

	return sign * integer;
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_atoi("----123"));
// 	printf("%d\n", ft_atoi("asd"));

// 	return 0;
// }