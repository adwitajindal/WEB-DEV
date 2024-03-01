/*
write a program in c to check whether a no. is prime or not using continue and break statement
*/

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number.\n", num);
            break;
        }
        continue;
    }

    if (i > num / 2)
    {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}