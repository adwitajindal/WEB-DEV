/* write a program in c to print the mirror image of a given number */
#include <stdio.h>
void main()
{
    int num, i, reverse;
    int remainder = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for (i = num; i > 0;)
    {
        reverse = i % 10;
        remainder = remainder * 10 + reverse;
        i = i / 10;
    }
    printf("%d", remainder);
}