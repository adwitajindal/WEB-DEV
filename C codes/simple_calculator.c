#include <stdio.h>
#include <math.h>
int main()
{
    int operation, i;
    float num1, num2;
    do
    {

        printf(" ENTER \"1\" FOR ADDITION\n");
        printf(" ENTER \"2\" FOR SUBTRACTION\n");
        printf(" ENTER \"3\" FOR DIVISION \n");
        printf(" ENTER \"4\" FOR MULTIPLICATION\n");
        printf(" ENTER \"5\" FOR SQUARE ROOT\n");
        printf(" ENTER \"6\" FOR POWER \n");
        printf("Enter the operation you want to perform: ");
        scanf("%d", &operation);
        printf("Enter 2 numbers separated by space or if square root enter second number as 0 : ");
        scanf("%f%f", &num1, &num2);

        if (operation == 1)
        {
            printf("%.2f", num1 + num2);
        }
        else if (operation == 2)
        {
            printf("%.2f", num1 - num2);
        }
        else if (operation == 3)
        {
            printf("%.2f", num1 / num2);
        }
        else if (operation == 4)
        {
            printf("%.2f", num1 * num2);
        }
        else if (operation == 5)
        {
            printf("%.2f", sqrt(num1));
        }
        else if (operation == 6)
        {
            printf("%.2f", pow(num1, num2));
        }
        printf("\nenter any number to proceed or 0 to exit...");
        scanf("%d", &i);
    } while (i != 0);
    {
    }
}