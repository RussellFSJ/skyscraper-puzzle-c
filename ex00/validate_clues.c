#include <stdlib.h>

int count_visible(int *line, int size);
void reverse_line_copy(int *src, int *dest, int size);

int line_is_filled(int *line, int size)
{
    int i = 0;
    while (i < size)
    {
        if (line[i] == 0)
            return 0;
        i++;
    }
    return 1;
}

void reverse_line(int *src, int *dest, int size)
{
    int i = 0;
    while (i < size)
    {
        dest[i] = src[size - 1 - i];
        i++;
    }
}

int validate_clues(int **grid, int **clues, int size)
{
    int i, j;
    int *row = malloc(sizeof(int) * size);
    int *rev = malloc(sizeof(int) * size);

    if (!row || !rev)
        return 0; // handle malloc failure

    i = 0;
    while (i < size)
    {
        // Check row from left to right
        j = 0;
        while (j < size)
        {
            row[j] = grid[i][j];
            j++;
        }

        if (line_is_filled(row, size))
        {
            if (count_visible(row, size) != clues[2][i])
            {
                free(row);
                free(rev);
                return 0;
            }

            reverse_line(row, rev, size);
            if (count_visible(rev, size) != clues[3][i])
            {
                free(row);
                free(rev);
                return 0;
            }
        }

        // Check column from top to bottom
        j = 0;
        while (j < size)
        {
            row[j] = grid[j][i];
            j++;
        }

        if (line_is_filled(row, size))
        {
            if (count_visible(row, size) != clues[0][i])
            {
                free(row);
                free(rev);
                return 0;
            }

            reverse_line(row, rev, size);
            if (count_visible(rev, size) != clues[1][i])
            {
                free(row);
                free(rev);
                return 0;
            }
        }

        i++;
    }

    free(row);
    free(rev);
    return 1;
}
