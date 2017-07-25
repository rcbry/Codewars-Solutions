int ** cartesian_neighbor(int x, int y)
{
    int **matrix = malloc(sizeof(int *) * 8);
    
    for (int i = 0; i < 8; i++)
        matrix[i] = malloc(sizeof(int) * 2);
    
    matrix[0][0] = x + 1; matrix[0][1] = y;
    matrix[1][0] = x + 1; matrix[1][1] = y - 1;
    matrix[2][0] = x + 1; matrix[2][1] = y + 1;
    matrix[3][0] = x - 1; matrix[3][1] = y;
    matrix[4][0] = x - 1; matrix[4][1] = y - 1;
    matrix[5][0] = x - 1; matrix[5][1] = y + 1;
    matrix[6][0] = x;     matrix[6][1] = y - 1;
    matrix[7][0] = x;     matrix[7][1] = y + 1;
         
    return matrix;
}
