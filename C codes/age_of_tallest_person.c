/* write a program in c to find out the age of the tallest person within given 10 persons */

#include <stdio.h>
void main()
{//
    // declaring variables
    int num_person, i, age, height, tallest_person, eldest_person;

    // number of persons
    printf("Enter the number of persons: ");
    scanf("%d", &num_person);

    // input every height and age of person
    for (i = 0; i < num_person; i++)
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("Enter the height in cm: ");
        scanf("%d", &height);

        // initialise variable

        tallest_person = 0;
        eldest_person = 0;

        // updating age as per height increases

        if (height > tallest_person)
        {
            eldest_person = age;
        }
    }

    //printing the age of the tallest person
    printf("The age of the tallest person is %d", eldest_person);
}