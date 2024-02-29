/*
fibonacci series
011235
*/
#include <stdio.h>
int main()
{
    int prev1 = 0;
    int prev2 = 1;
    int next, n, i;
    printf("enter the no upto where to print");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
        printf("%d\t", next);
    }
}