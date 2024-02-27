#include <stdio.h>
void main()
{
    char city_grade;
    float HRA, basic_salary, IT, total_salary, PF, DA, net_salary;
    printf("Enter basic salary:");
    scanf("%f", &basic_salary);
    printf("Enter city grade (A,B,C):");
    scanf("%s", &city_grade);
    PF = 0.1 * basic_salary;
    DA = 0.2 * basic_salary;


    if (city_grade == 'A')
    {
        HRA = 0.2 * basic_salary;
    }
    else if (city_grade == 'B')
    {
        HRA = 0.15 * basic_salary;
    }
    else if (city_grade == 'C')
    {
        HRA = 0.1 * basic_salary;
    }


    total_salary = basic_salary + HRA + DA;

    if (basic_salary <= 20000)
    {
        IT = 0.2 * total_salary;
    }
    else
    {
        IT = 0.3 * total_salary;
    }


    net_salary = total_salary - PF - IT;


    printf("Total salary: %.2f \n", total_salary);
    printf("Net salary: %.2f", net_salary);
}