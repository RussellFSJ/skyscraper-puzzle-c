/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:25:18 by rfoo              #+#    #+#             */
/*   Updated: 2025/10/19 13:29:55 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Creates a reversed row/column to check visibility.
 * 
 * Creates a reversed row or column to check visibility from 
 * other orientation. 
 * 
 * @param line Original line (Left to Right or Top to Bottom )
 * @param size Number of rows/columns
 * @return int* Line of reversed orientation
 */
int	*reverse_line(int *line, int size)
{
	int	*rev;
	int	index;

	rev = malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		rev[index] = line[size - 1 - index];
		index++;
	}
	return (rev);
}
