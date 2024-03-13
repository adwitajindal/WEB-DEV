/* WAP in c to print the transpose matrix of 2-D matrix of order 3 * 3 */
#include <stdio.h>
int main()
{
    int row = 3;
    int col = 3;
    int matrix[row][col], transpose[row][col];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nORIGINAL MATRIX\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTRANSPOSE MATRIX\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}