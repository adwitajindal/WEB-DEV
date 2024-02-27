/* input the centre of circle
    also the radius of the circle
    input another point and check whether it lies
    within the circle or not
*/

#include <stdio.h>
#include <math.h>
void main()
{
    float x_centre, y_centre, x_point, y_point, radius, distance;
    printf("Enter the Center of circle (x y): ");
    scanf("%f %f", &x_centre, &y_centre);
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Enter the coordinates of a point(x y): ");
    scanf("%f %f", &x_point, &y_point);
    distance = sqrt(pow(x_point - x_centre, 2) + pow((y_point - y_centre), 2));
    if (distance < radius)
    {
        printf("Point lies within the circle");
    }
    else if (distance == radius)
    {
        printf("Point lies on the circle");
    }
    else
    {
        printf("Point lies outside the circle");
    }
}