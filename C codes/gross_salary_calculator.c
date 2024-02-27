#include <stdio.h>

int main()
{
    float basic_salary, gross_salary;
    float hra /*House Rent Allowance*/, da /* Dearness Allowance*/;
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic_salary);
    if (basic_salary <= 10000)
    {
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    }
    else if (basic_salary <= 20000)
    {
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    }
    else
    {
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }
    gross_salary = basic_salary + hra + da;
    printf("Gross salary: %.2f\n", gross_salary);

    return 0;
}
