// find out the sum of two one dimensional matrix

#include <stdio.h>
void main()
{
    // input the size of array
    int length;
    printf("Enter the size of largest array: ");
    scanf("%d", &length);

    // declaring arrays of the specified length
    int i;
    int a[length], b[length], c[length];
    for (i = 0; i < length; i++)
    {
        printf("Enter value [%d] (First matrix): ", i + 1);
        scanf("%d", &a[i]);
    }
    i = 0;
    for (i = 0; i < length; i++)
    {
        printf("Enter value [%d] (second matrix): ", i + 1);
        scanf("%d", &b[i]);
    }
    i = 0;
    printf("Sum of the two matrix is [\t");
    for (i = 0; i < length; i++)
    {
        c[i] = a[i] + b[i];
        printf("\'%d\'\t", c[i]);
        continue;
    }
    printf("]");
}