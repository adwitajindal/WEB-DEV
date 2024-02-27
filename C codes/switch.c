#include <stdio.h>
int main()
{
    int day;
    // 1-mon ; 2-tues ; 3-wed ; 4-thurs ; 5-fri ; 6-sat ; 7-sun//
    printf("Enter day(0-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday \n"); // break statement is must so that all the other statements after the true condition should not be printed//
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;

    default:
        printf("Invalid day");
        break;
    }
}