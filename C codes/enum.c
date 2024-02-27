#include <stdio.h>
enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum Day today, tomorrow;
    today = TUESDAY;
    tomorrow = WEDNESDAY;
    printf("Today is %d\n", today);
    printf("Tomorrow is %d\n", tomorrow);
    return 0;
}


