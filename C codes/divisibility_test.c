#include <stdio.h>
int main()
{
    int number;
    int divisor;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Enter the number you want to check the divisibility for: ");
    scanf("%d", &divisor);
    if (number % divisor == 0)
    {
        printf("Yes, the %d is divisible by %d ", number, divisor);
    }
    else
    {
        printf("No, the %d is not divisible by %d ", number, divisor);
    }
}