#include <stdio.h>
int main()
{
    int physics, chemistry, biology, mathematics, computer;
    float percentage;
    printf("Enter marks for Physics, Chemistry, Biology, Mathematics, and Computer: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer);
    int total_marks = physics + chemistry + biology + mathematics + computer;
    percentage = (float)total_marks / 5;
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    return 0;
}
