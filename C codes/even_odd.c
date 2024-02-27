#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num % 2;
    switch (num)
    {
    case 0:
        printf("Even\n");
        break;
    default:
        printf("odd\n");
        break;
    }
}
