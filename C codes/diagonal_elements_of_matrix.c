// WAP in C to print the both diagonal elements in diagonal format of 2 D matrix order n*n.

#include <stdio.h>
int main()
{
    int row;
    int col;
    int i, j;
    int max = 0;

    printf("Input the no. of rows: ");
    scanf("%d", &row);
    printf("Input the no. of columns: ");
    scanf("%d", &col);
    if (col > row)
    {
        max += col;
    }
    else
    {
        max += row;
    }

    int matrix[row][col];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("  %d  ", matrix[i][j]);
            }
            else if ((i + j) == (max - 1))
            {
                printf("  %d  ", matrix[i][j]);
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");
    }
}