#include <stdio.h>
int main()
{
    int season;
    printf("Enter season (1-12): ");
    scanf("%d", &season);
    switch (season)
    {
    case 11:
    case 12:
    case 1:
    case 2:
        printf("Winter \n");
        break;
    case 3:
    case 4:
        printf("Spring \n");
        break;
    case 5:
    case 6:
    case 7:
        printf("Summer \n");
        break;
    case 8:
    case 9:
    case 10:
        printf("Autumn\n");
        break;

    default:
        printf("Invalid Season\n");
        break;
    }
}