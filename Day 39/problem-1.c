/*
Question: Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int rows, cols, matrix[20][20], i, j, diagonalSize, distinct = 1;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || cols < 1 || rows > 20 || cols > 20) return 1;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &matrix[i][j]) != 1) return 1;

    diagonalSize = rows < cols ? rows : cols;

    for (i = 0; i < diagonalSize; i++)
        for (j = i + 1; j < diagonalSize; j++)
            if (matrix[i][i] == matrix[j][j]) distinct = 0;

    puts(distinct ? "True" : "False");
    return 0;
}