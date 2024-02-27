/*
1
01
101
0101
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}