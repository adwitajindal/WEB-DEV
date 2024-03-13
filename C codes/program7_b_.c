#include <stdio.h>
int main()
{
    int num1, num2, num3;
    num1 = 5;
    num2 = 7;
    num3 = 4;
    if (num1 > num2 && num1 > num3)
    {
        printf("the greatest no is %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("the greatest no is %d", num2);
    }
    else
    {
        printf("the greatest no is %d", num3);
    }
}
