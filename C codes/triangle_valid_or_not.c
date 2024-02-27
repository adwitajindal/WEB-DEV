#include <stdio.h>
void main()
{
    float side_1, side_2, side_3;
    printf("Enter length of first side: ");
    scanf("%f", &side_1);
    printf("Enter length of second side: ");
    scanf("%f", &side_2);
    printf("Enter length of third side: ");
    scanf("%f", &side_3);
    if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_1 + side_3 > side_2)
    {
        printf("YES, Triangle is possible\n");
    }
    else
    {
        printf("NO, Triangle is not possible\n");
    }
}

