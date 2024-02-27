/* write a program in c to find out the age of the tallest person within given 10 persons */

#include <stdio.h>
void main()
{
    int num_person, i, age, height, tallest_person, eldest_person;
    printf("Enter the number of persons: ");
    scanf("%d", &num_person);
    for (i = 0; i < num_person; i++)
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("Enter the height in cm: ");
        scanf("%d", &height);
        tallest_person = 0;
        eldest_person = 0;
        if (height > tallest_person)
        {

            eldest_person = age;
        }
    }
    printf("The age of the tallest person is %d", eldest_person);
}