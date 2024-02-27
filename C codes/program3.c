
#include <stdio.h>
#define pi 3.14
int main()
{
    float radius, area, circumference;
    printf("Enter the value of radius(in cm): ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("area of circle is %.2f cm sq.\n", area);
    printf("circumference of circle is %.2f cm.\n", circumference);

}



