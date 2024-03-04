#include <stdio.h>
int main()
{
    int num, i, largest, lim;
    printf("How many numbers you want to enter: ");
    scanf("%d",&lim);
    largest = 0;
    for (i = 1; i <= lim; i++)
    {
        printf("number %d :", i);
        scanf("%d", &num);
        if (num > largest)
        {
            largest = num;
        }
        else 
        continue;
    }
    printf("largest number is %d",largest);
}