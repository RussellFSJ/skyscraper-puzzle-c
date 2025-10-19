/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:12:45 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 13:33:31 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Counts the number of visible boxes from line orientation.
 * 
 * @param line Array of block values
 * @param size Number of rows or columns
 * @return int Number of visible boxes
 */
int	count_vis(int *line, int size)
{
	int	index;
	int	count;
	int	max_value;

	index = 0;
	count = 0;
	max_value = 0;
	while (index < size)
	{
		if (line[index] > max_value)
		{
			max_value = line[index];
			count++;
		}
		index++;
	}
	return (count);
}
