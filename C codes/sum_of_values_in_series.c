// sum of series 1/1! + 2/2! + 3/3! + .... n terms
#include <stdio.h>
int main()
{
    int n, i, j;
    double fact;
    float sum = 0;
    printf("Enter the number upto which you want to print this series (1/1! + 2/2! + 3/3! + .... n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + (i / fact);
    }
    printf("%.2f", sum);
}