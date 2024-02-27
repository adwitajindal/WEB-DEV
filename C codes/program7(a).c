#include <stdio.h>
int main()
{
    int num1, num2, num3, greatest;
    printf("enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    greatest = (num1 > num2 && num1 > num3 ? num1 : num2 > num3 ? num2
                                                                : num3);
    printf("the greatest no is %d", greatest);
}

