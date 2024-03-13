// WAP in C to print the both diagonal elements in diagonal format of 2 D matrix order 3x3.

#include <stdio.h>
int main()
{
    int row = 3;
    int col = 3;
    int matrix[row][col];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
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