int is_line_complete(int *line, int size) {
    int i = 0;
    while (i < size) {
        if (line[i] == 0)
            return 0;
        i++;
    }
    return 1;
}