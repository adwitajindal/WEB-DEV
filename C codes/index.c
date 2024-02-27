#include <stdio.h>
// this is a single line comment //
/*this is multiline
            comment*/
/*A computer program that translates C language into machine language is called compiler.
    eg: index.c-----> Computer -------> index.exe {for windows}/.out {for mac,linux}*/

// this section of code displays how to specify data type of a variable //
int main()
{
    char hashtag = '#'; /*";" is necessary after every line to let the compiler easily understand that where each line of the code ends as it is compiled line by line */
    int age = 18;
    float pi = 3.14;
    int new_age;
    printf("hello world \n");          // this statement is to print the output of the code & "/n" is for printing the line in next line //
    printf("name is %c\n", hashtag);   // here "%c" instructs compiler that variable next to it is char//
    printf("age is %d\n", age);        // here "%d" instructs compiler that variable next to it is integer//
    printf("value of pi is %f\n", pi); // here "%f" instructs compiler that variable next to it is float//

    printf("enter new age:");
    scanf("%d", &new_age); // scanf is used to take input from the user and & is used to store the data in the variable next to it//

    printf("Now, age is %d\n", new_age);

    int age_sum = age + new_age; // "=" is the assignment opertaor used to assign values and "+" is the additional operator//

    printf("sum of the age is %d.", age_sum);
    return 0;
}
