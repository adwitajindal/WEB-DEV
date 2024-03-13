#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("number is positive");
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("number is negative");
            break;

        case 0:
            printf("number is zero");
            break;
        }
        break;
    }
}


