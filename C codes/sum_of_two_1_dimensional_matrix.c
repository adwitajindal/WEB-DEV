// find out the sum of two one dimensional matrix

#include <stdio.h>
void main()
{
    int j;
    int a[4], b[4], c[4];
    for (j = 0; j < 4; j++)
    {
        printf("Enter value (First matrix): ");
        scanf("%d", &a[j]);
    }
    j = 0;
    for (j = 0; j < 4; j++)
    {
        printf("Enter value (second matrix): ");
        scanf("%d", &b[j]);
    }
    j = 0;
    printf("[");
    for (j = 0; j < 4; j++)
    {
        c[j] = a[j] + b[j];
        printf("\'%d\'\t", c[j]);
        continue;
    }
     printf("]");
}